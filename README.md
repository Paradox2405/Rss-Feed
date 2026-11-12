# RSS Feed Reader (Qt / C++)

A minimal, material-styled **cross-platform desktop RSS reader** written in C++ with Qt. Add RSS feed links, and the app fetches each feed and lists its latest articles. It was tested on Ubuntu and Windows.

This was a university multi-platform app development project. It's an **English port** of [antonybrro's](https://github.com/antonybrro) original RSS client, with UI changes. Credit for the original goes to its creator.

## Features

- Add feeds by URL from a dialog
- Feed list and article list, using Qt model/view (`FeedModel`, `RssModel`)
- Feed list saved as JSON (`JsonParser`)
- Material-themed UI with a custom icon

## Tech stack

C++, Qt Widgets and Qt Network, qmake (`RSSClient.pro`)

## Project structure

```
main.cpp
MainWindow.{h,cpp,ui}       main window
AddFeedDialog.{h,cpp,ui}    add a feed
FeedModel.{h,cpp}           feeds
RssModel.{h,cpp}            articles from a feed
JsonParser.{h,cpp}          saves and loads feeds
resourse.qrc, rss.ico       resources
Program-Documentation/      project report and screenshots
```

## Building

With **Qt Creator**: open `RSSClient.pro`, choose a kit and press Run.

From the command line:

```bash
qmake RSSClient.pro
make            # on Windows with MinGW: mingw32-make
```

## Documentation

The project report (`MultiPlatformAppDev.docx`) and screenshots are in [`Program-Documentation/`](Program-Documentation).
