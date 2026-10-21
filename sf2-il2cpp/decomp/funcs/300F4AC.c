// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$GGOCJMKHICA @ RVA 0x300F4AC

bool Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__GGOCJMKHICA
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  FBBNEILNOKK_array *JALOKGCPLGJ;
  System_Collections_Generic_List_bool____o *pSVar2;
  
  if ((DAT_04565b9c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<FBBNEILNOKK>__);
    FUN_01bab630(&FBBNEILNOKK___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Count__);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_19AD3623A19D0EE4B7E5ACD9EA7A741A6CD680183CCAB300A573C6951EA97BDE
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_9FF1698BF4582CED360C5B73815B420A720E16559568F07F83655276E996ED29
                );
    DAT_04565b9c = 1;
  }
  pSVar2 = (__this->fields).MFKHOLCJNKE;
  if (pSVar2 != (System_Collections_Generic_List_bool____o *)0x0) {
    if ((pSVar2->fields)._size <= ABACOMLKIAJ) {
      return false;
    }
    JALOKGCPLGJ = (FBBNEILNOKK_array *)FUN_01bab718(FBBNEILNOKK___TypeInfo,6);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)JALOKGCPLGJ,
               Field_<PrivateImplementationDetails>_9FF1698BF4582CED360C5B73815B420A720E16559568F07F83655276E996ED29
               ,(MethodInfo *)0x0);
    bVar1 = System_Linq_Enumerable__Contains<Int32Enum>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)JALOKGCPLGJ,AAJGEHHPMGH,
                       Method_System_Linq_Enumerable_Contains<FBBNEILNOKK>__);
    if (!bVar1) {
      JALOKGCPLGJ = (FBBNEILNOKK_array *)FUN_01bab718(FBBNEILNOKK___TypeInfo,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)JALOKGCPLGJ,
                 Field_<PrivateImplementationDetails>_19AD3623A19D0EE4B7E5ACD9EA7A741A6CD680183CCAB300A573C6951EA97BDE
                 ,(MethodInfo *)0x0);
      bVar1 = System_Linq_Enumerable__Contains<Int32Enum>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)JALOKGCPLGJ,
                         AAJGEHHPMGH,Method_System_Linq_Enumerable_Contains<FBBNEILNOKK>__);
      if (!bVar1) {
        return false;
      }
    }
    bVar1 = Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__PIMLGDDBIPN
                      (__this,ABACOMLKIAJ,JALOKGCPLGJ,method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

