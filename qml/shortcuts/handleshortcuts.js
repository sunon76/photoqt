function whatToDoWithFoundShortcut(sh) {

    console.log("SH:", sh)

    var cmd = sh[2]

//        if(cmd === "__quit")
//            mainwindow.quitPhotoQt();
//        else if(cmd === "__close")
//            mainwindow.closePhotoQt()
//        else if(cmd === "__settings")
//            call.show("settingsmanager")
    /*else*/ if(cmd === "__next")
        imageitem.loadNextImage()
    else if(cmd === "__prev")
        imageitem.loadPrevImage()
//        else if(cmd === "__about")
//            call.show("about")
//        else if(cmd === "__slideshow")
//            call.show("slideshowsettings")
//        else if(cmd === "__filterImages")
//            call.show("filter")
//        else if(cmd === "__slideshowQuick")
//            call.load("slideshowStart")
    else if(cmd === "__open")
        loader.show("filedialog")
    else if(cmd === "__zoomIn")
        imageitem.zoomIn()
    else if(cmd === "__zoomOut")
        imageitem.zoomOut()
    else if(cmd === "__zoomReset") {
//            imageitem.resetPosition()
        imageitem.zoomReset()
    }
//        } else if(cmd === "__zoomActual")
//            imageitem.zoomActual()
//        else if(cmd === "__rotateL")
//            imageitem.rotateImage(-90)
//        else if(cmd === "__rotateR")
//            imageitem.rotateImage(90)
//        else if(cmd === "__rotate0")
//            imageitem.resetRotation()
//        else if(cmd === "__flipH")
//            imageitem.mirrorHorizontal()
//        else if(cmd === "__flipV")
//            imageitem.mirrorVertical()
//        else if(cmd === "__flipReset")
//            imageitem.resetMirror()
//        else if(cmd === "__rename") {
//            call.load("filemanagementRenameShow")
//        } else if(cmd === "__delete")
//            call.load("filemanagementDeleteShow")
//        else if(cmd === "__deletePermanent")
//            call.load("permanentDeleteFile")
//        else if(cmd === "__copy")
//            call.load("filemanagementCopyShow")
//        else if(cmd === "__move")
//            call.load("filemanagementMoveShow")
//        else if(cmd === "__hideMeta") {
//            if(metadata.opacity > 0) {
//                metadata.uncheckCheckbox()
//                metadata.hide()
//            } else {
//                metadata.checkCheckbox()
//                metadata.show()
//            }
//        }
    else if(cmd === "__gotoFirstThb")
        imageitem.loadFirstImage()
    else if(cmd === "__gotoLastThb")
        imageitem.loadLastImage()
//        else if(cmd === "__wallpaper")
//            call.show("wallpaper")
//        else if(cmd === "__scale")
//            call.show("scale")
//        else if(cmd === "__playPauseAni")
//            imageitem.playPauseAnimation()
//        else if(cmd === "__imgur")
//            call.show("imgurfeedback")
//        else if(cmd === "__imgurAnonym")
//            call.show("imgurfeedbackanonym")
//        else if(cmd === "__defaultFileManager")
//            getanddostuff.openInDefaultFileManager(variables.currentDir + "/" + variables.currentFile)
//        else if(cmd === "__histogram") {
//            call.ensureElementSetup("histogram")
//            settings.histogram = !settings.histogram
//        } else if(cmd === "__clipboard")
//            getanddostuff.clipboardSetImage(variables.currentDir + "/" + variables.currentFile)
//        else if(cmd === "__tagFaces")
//            call.requestTagFaces()
//        else {
//            getanddostuff.executeApp(cmd, variables.currentDir + "/" + variables.currentFile)
//            if(close !== undefined && close === true)
//                mainwindow.closePhotoQt()
//        }

}