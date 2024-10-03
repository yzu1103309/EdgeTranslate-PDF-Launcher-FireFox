# EdgeTranslate-PDF-Launcher-Firefox

Allow Firefox to open pdf links in EdgeTranslate extention, just like Chrome and Edge.

## Notice

You will need [Firefox Developer Edition](https://www.mozilla.org/zh-TW/firefox/developer/) to make this work properly. (Due to the xpinstall.signatures.required restriction)
Or you can consider using other Firefox-based browsers (e.g. [zen-browser](https://github.com/zen-browser/desktop)), which removes this restriction.

## How did I achieve this

The difference between EdgeTranslate extention for Chrome and the one for Firefox is that the Chrome version contains a folder named `/pdf/`, which contains essential files for opening pdf links with the extention

So firstly, I modded the extention .xpi file for Firefox (it's actually a zip archive), porting the `/pdf/` folder from the Chrome version to it.

After installing the modded extention, we can now open EdgeTranslate PDF Reader by typing the url:
```
moz-extension://<extention-id>/pdf/viewer.html?file=<online-pdf-link>
```

Then, we need a way to launch the EdgeTranslate PDF Reader automatically when we open a pdf url

So I wrote a C++ program that can launch the browser with that link, taking `argv[1]` as the pdf link to open.

We also need a mechanism to trigger the launcher program when we click on some pdf links. After trying various methods, I chose [Open in IE] extention to achieve this.

(Under Development and Testing. To Be Continued ... )
