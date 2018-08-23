#
#  Be sure to run `pod spec lint RevTwo.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.name         = "RevTwo"
  s.version      = "3.0.3"
  s.summary      = "In-App Support for your iOS app."
  s.homepage     = "http://revtwo.com/"
  s.documentation_url = "https://revtwo.readme.io/"
  s.author             = { "RevTwo Team" => "info@revtwo.com" }

  
  s.description  = <<-DESC
  Add a support experience to your app!  
  - Create a help community for your app's users to allow your power users to help the newbies
  - Connect your app to your company's help desk for product support or technical questions
  - Full suite of developer tools to debug issues with your app during development and test flight
  Features:
  - Screen Sharing
  - Audio call
  - View device information
  - View App Logs
  - View your app's file system
  - View sqlite database
  - Track your app's memory usage
  - Easy to integrate API
  - Fully customizable
                   DESC

  # ―――  Todo  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  # s.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"
  s.social_media_url   = "https://twitter.com/therevtwo"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.license      = { :type => "Commercial", :file => "LICENSE.txt" }


  
  

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.platform     = :ios, "8.0"


  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the location from where the source should be retrieved.
  #  Supports git, hg, bzr, svn and HTTP.
  #

  #s.source       = { :git => "https://github.com/RevTwoInAppSupport/RevTwo-iOS-Library.git", :branch => "master" }
  s.source       = { :git => "https://github.com/RevTwoInAppSupport/RevTwo-iOS-Library.git", :tag => s.version }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #

  s.source_files  = "Classes/*.{h,m}"
  s.public_header_files = "Classes/*.h"
  s.exclude_files = "Classes/Exclude"
  s.preserve_paths = 'Library/librevtwo.a'
  s.vendored_libraries = 'Library/librevtwo.a'
  s.libraries = 'revtwo', 'sqlite3'


  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #
  s.resources = "Resources/*.{png,jpg,xib}"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  
  s.dependency "PubNub", "<= 4.4.1"
  s.dependency "libjingle_peerconnection"
  s.dependency "JSQMessagesViewController"
  #s.dependency "Firebase", "= 2.5.1"

  s.dependency "Firebase/Core"
  s.dependency "Firebase/Auth"
  s.dependency "Firebase/Database"


end
