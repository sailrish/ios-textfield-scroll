# ios-textfield-scroll
## Overview

The xcode project contains an example that implements the class "UITextfieldScrollViewController." When the keyboard appears, if focused textfield become hidden from the keyboard, it scrolls up to keyboard to be edited. It works for any iOS devices in portrait and landscape orientation.

##Installation
* Add UITextfieldScrollViewController.h and UITextfieldScrollViewController.m in your XCode project 
* Subclass your custom viewcontroller with UITextfieldScrollViewController

![Mou icon](https://raw.github.com/mikthebig/ios-textfield-scroll/master/assets/asset_01.png)

* Since UITextfieldScrollViewController contains a scrollView outlet property, your custom view controller inherits that property, so connect scrollView as outlet in your custom view

![Mou icon](https://raw.github.com/mikthebig/ios-textfield-scroll/master/assets/asset_02.png)

* Since UITextfieldScrollViewController implements UITextfield delegate, connect your textfields as delegate in your custom view controller (File's Owner in this example)

![Mou icon](https://raw.github.com/mikthebig/ios-textfield-scroll/master/assets/asset_03.png)

That's all.

##Properties