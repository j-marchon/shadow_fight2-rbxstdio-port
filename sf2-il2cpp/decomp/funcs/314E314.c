// Nekki.SF2.GUI.ModuleHolder$$KPJJLFDBJCN @ RVA 0x314E314

void Nekki_SF2_GUI_ModuleHolder__KPJJLFDBJCN
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  System_Predicate_UIModule__o **ppSVar1;
  System_Collections_Generic_List_UIModule__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Predicate_UIModule__o *match;
  
  if ((DAT_045667e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
    FUN_01bab630(&System_Predicate<UIModule>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_<>c_CMEEANHGFBE__);
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo);
    DAT_045667e7 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__35_0;
  if (match == (System_Predicate_UIModule__o *)0x0) {
    if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    }
    match = (System_Predicate_UIModule__o *)thunk_FUN_01bda818(System_Predicate<UIModule>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__35_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  pSVar2 = (__this->fields)._MountOnStart;
  if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    System_Collections_Generic_List<object>__RemoveAll
              ((System_Collections_Generic_List_object__o *)pSVar2,(System_Predicate_T__o *)match,
               Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
    pSVar2 = (__this->fields)._MountOnStart_Mobiles;
    if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)pSVar2,(System_Predicate_T__o *)match,
                 Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
      pSVar2 = (__this->fields)._MountOnStart_Steam;
      if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
        System_Collections_Generic_List<object>__RemoveAll
                  ((System_Collections_Generic_List_object__o *)pSVar2,
                   (System_Predicate_T__o *)match,
                   Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
        pSVar2 = (__this->fields)._MountOnStart_Switch;
        if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
          System_Collections_Generic_List<object>__RemoveAll
                    ((System_Collections_Generic_List_object__o *)pSVar2,
                     (System_Predicate_T__o *)match,
                     Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
          pSVar2 = (__this->fields)._MountOnLater;
          if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
            System_Collections_Generic_List<object>__RemoveAll
                      ((System_Collections_Generic_List_object__o *)pSVar2,
                       (System_Predicate_T__o *)match,
                       Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
            pSVar2 = (__this->fields)._MountOnLater_Mobiles;
            if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
              System_Collections_Generic_List<object>__RemoveAll
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         (System_Predicate_T__o *)match,
                         Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
              pSVar2 = (__this->fields)._MountOnLater_Switch;
              if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
                System_Collections_Generic_List<object>__RemoveAll
                          ((System_Collections_Generic_List_object__o *)pSVar2,
                           (System_Predicate_T__o *)match,
                           Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
                pSVar2 = (__this->fields)._MountOnLater_Steam;
                if (pSVar2 != (System_Collections_Generic_List_UIModule__o *)0x0) {
                  System_Collections_Generic_List<object>__RemoveAll
                            ((System_Collections_Generic_List_object__o *)pSVar2,
                             (System_Predicate_T__o *)match,
                             Method_System_Collections_Generic_List<UIModule>_RemoveAll__);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

