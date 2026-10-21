// Nekki.SF2.GUI.Menu.MainMenu$$JGGDCNNJLOL @ RVA 0x356B620

CBLABOPKBKD_o *
Nekki_SF2_GUI_Menu_MainMenu__JGGDCNNJLOL
          (System_String_o *FCIENBDOEKO,System_Collections_Generic_List_CBLABOPKBKD__o *EDEHNHIHDDH,
          MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  CBLABOPKBKD_o *pCVar3;
  
  if ((DAT_04568c28 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_EINNIBGMICO_POJANPDHFKJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_EINNIBGMICO_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<CBLABOPKBKD>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<CBLABOPKBKD>__);
    FUN_01bab630(&System_Func<CBLABOPKBKD,_bool>_TypeInfo);
    DAT_04568c28 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_EINNIBGMICO_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)FCIENBDOEKO;
    thunk_FUN_01c20e04(pIVar2,FCIENBDOEKO);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)pIVar2->klass,(MethodInfo *)0x0);
    if (bVar1) {
      return (CBLABOPKBKD_o *)0x0;
    }
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<CBLABOPKBKD,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    source = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)EDEHNHIHDDH,predicate,
                        Method_System_Linq_Enumerable_Where<CBLABOPKBKD>__);
    pCVar3 = (CBLABOPKBKD_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       (source,Method_System_Linq_Enumerable_FirstOrDefault<CBLABOPKBKD>__);
    return pCVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

