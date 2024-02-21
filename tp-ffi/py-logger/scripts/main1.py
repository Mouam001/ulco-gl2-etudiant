import Logger
if __name__ == '__main__':

    print('TODO')

    #create a logger and add some items
    log = Logger.Logger()
    log.add_item(Logger.Level.Info, "une autre info")
    log.add_item(Logger.Level.Info, "une info")
    log.add_item(Logger.Level.Error, "une Erreur")
    log.add_item(Logger.Level.Warning, "un avertissement")
    
    

    #report_by_added
    print("**** report_by_added ****")
    print(log.report_by_added())
    #report_by_level
    print("**** report_by_level ****")
    print(log.report_by_level())
    

