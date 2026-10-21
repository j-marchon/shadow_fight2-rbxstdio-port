// KBFGKFAKGPP$$DABOBFKFPKJ @ RVA 0x32EF404

void KBFGKFAKGPP__DABOBFKFPKJ
               (KBFGKFAKGPP_o *__this,System_Collections_Generic_List_GLCAPECMBLM__o *EDEHNHIHDDH,
               MethodInfo *method)

{
  System_Action_T__o *action;
  
  if ((DAT_04567663 & 1) == 0) {
    FUN_01bab630(&System_Action<GLCAPECMBLM>_TypeInfo);
    FUN_01bab630(&Method_KBFGKFAKGPP_FHLIGIMFAEA__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    DAT_04567663 = 1;
  }
  action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<GLCAPECMBLM>_TypeInfo);
  System_Action<object>___ctor();
  if (EDEHNHIHDDH != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,action,
               Method_System_Collections_Generic_List<GLCAPECMBLM>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

