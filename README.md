# EdgeTranslate-PDF-Launcher-FireFox

Allow Firefox to open pdf links in EdgeTranslate extention, just like Chrome and Edge.

## How did I achieve this

The difference between EdgeTranslate extention for Chrome and for Firefox is that the Chrome version contains a folder named `/pdf/`, which contains essential files for opening pdf links with the extention

So firstly, I modded the extention .xpi file for Firefox (it's actually a zip archive), porting the `/pdf/` folder from the Chrome version to it.

After installing the modded extention, we can now open EdgeTranslate PDF Reader by typing the url:
```
moz-extension://<extention-id>/pdf/viewer.html?file=<online-pdf-link>
```

Then, we need a way to launch the EdgeTranslate PDF Reader automatically when we open a pdf url

So I wrote a C++ program to launch the browser with that link.

(To Be Continued)
