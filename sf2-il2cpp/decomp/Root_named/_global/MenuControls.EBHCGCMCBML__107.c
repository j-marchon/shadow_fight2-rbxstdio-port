// TypeDefIndex 107
// Namespace: 
// private class MenuControls.EBHCGCMCBML
// Fields:
//   private List<bool[]> MFKHOLCJNKE; // 0x10

// ===== public bool GGOCJMKHICA(int ABACOMLKIAJ, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x300F4AC]
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


// ===== public bool PNBPCMGLKEF(int ABACOMLKIAJ, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x300F5E8]
// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$PNBPCMGLKEF @ RVA 0x300F5E8

bool Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__PNBPCMGLKEF
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_bool____o *__this_00;
  Il2CppObject *pIVar2;
  
  if ((DAT_04565b9d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    DAT_04565b9d = 1;
  }
  __this_00 = (__this->fields).MFKHOLCJNKE;
  if (__this_00 != (System_Collections_Generic_List_bool____o *)0x0) {
    if (ABACOMLKIAJ < (__this_00->fields)._size) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,ABACOMLKIAJ,
                          Method_System_Collections_Generic_List<bool[]>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0310f68c;
      if (*(uint *)&pIVar2[1].monitor <= (uint)AAJGEHHPMGH) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      bVar1 = *(char *)((long)&pIVar2[2].klass + (long)AAJGEHHPMGH) != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0310f68c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool PIMLGDDBIPN(int ABACOMLKIAJ, FBBNEILNOKK[] JALOKGCPLGJ)  [RVA 0x3010048]
// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$PIMLGDDBIPN @ RVA 0x3010048

bool Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__PIMLGDDBIPN
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               FBBNEILNOKK_array *JALOKGCPLGJ,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_Collections_Generic_List_bool____o *__this_00;
  Il2CppObject *pIVar3;
  bool bVar4;
  uint uVar5;
  
  if ((DAT_04565b9e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    DAT_04565b9e = 1;
  }
  if (JALOKGCPLGJ == (FBBNEILNOKK_array *)0x0) {
LAB_0311011c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)JALOKGCPLGJ->max_length;
  if ((int)uVar1 < 1) {
    bVar4 = false;
  }
  else {
    uVar5 = 0;
    bVar4 = false;
    do {
      if (uVar1 <= uVar5) {
LAB_03110120:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      __this_00 = (__this->fields).MFKHOLCJNKE;
      if (__this_00 == (System_Collections_Generic_List_bool____o *)0x0) goto LAB_0311011c;
      uVar2 = JALOKGCPLGJ->m_Items[(int)uVar5];
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,ABACOMLKIAJ,
                          Method_System_Collections_Generic_List<bool[]>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0311011c;
      if (*(uint *)&pIVar3[1].monitor <= uVar2) goto LAB_03110120;
      uVar1 = (uint)JALOKGCPLGJ->max_length;
      uVar5 = uVar5 + 1;
      bVar4 = (bool)(bVar4 | *(char *)((long)&pIVar3[2].klass + (long)(int)uVar2) != '\0');
    } while ((int)uVar5 < (int)uVar1);
  }
  return bVar4;
}


// ===== public void HMNIABGDCDL(int ABACOMLKIAJ, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x300FD14]
// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$HMNIABGDCDL @ RVA 0x300FD14

void Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__HMNIABGDCDL
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  System_Collections_Generic_List_bool____o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04565b9f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    FUN_01bab630(&StringLiteral_8971/*"MenuControls::ClearFlag: Can't clear flag"*/);
    DAT_04565b9f = 1;
  }
  __this_00 = (__this->fields).MFKHOLCJNKE;
  if (__this_00 != (System_Collections_Generic_List_bool____o *)0x0) {
    if ((__this_00->fields)._size <= ABACOMLKIAJ) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_8971/*"MenuControls::ClearFlag: Can't clear flag"*/,(MethodInfo *)0x0);
      return;
    }
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,ABACOMLKIAJ,
                        Method_System_Collections_Generic_List<bool[]>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((uint)AAJGEHHPMGH < *(uint *)&pIVar1[1].monitor) {
        *(undefined1 *)((long)&pIVar1[2].klass + (long)AAJGEHHPMGH) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BFPFOFJOOIA(int ABACOMLKIAJ, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x300F694]
// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$BFPFOFJOOIA @ RVA 0x300F694

void Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__BFPFOFJOOIA
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_RuntimeTypeHandle_o handle;
  long lVar3;
  int32_t iVar4;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  System_Boolean_array *item;
  Il2CppObject *pIVar5;
  System_Boolean_array_array *pSVar6;
  System_Collections_Generic_List_bool____o *__this_01;
  
  if ((DAT_04565ba0 & 1) == 0) {
    FUN_01bab630(&bool___TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&FBBNEILNOKK_var);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04565ba0 = 1;
  }
  __this_01 = (__this->fields).MFKHOLCJNKE;
  if (__this_01 != (System_Collections_Generic_List_bool____o *)0x0) {
    iVar1 = (__this_01->fields)._size;
    handle.fields.value =
         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)FBBNEILNOKK_var;
    while (FBBNEILNOKK_var = (Il2CppType *)handle.fields.value, iVar1 <= ABACOMLKIAJ) {
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Enum_TypeInfo);
      }
      __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
      if (__this_00 == (System_Array_o *)0x0) goto LAB_0310f878;
      iVar4 = System_Array__get_Length(__this_00,(MethodInfo *)0x0);
      item = (System_Boolean_array *)FUN_01bab718(bool___TypeInfo,iVar4);
      lVar3 = Method_System_Collections_Generic_List<bool[]>_Add__;
      pSVar6 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar6 == (System_Boolean_array_array *)0x0) goto LAB_0310f878;
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = (__this->fields).MFKHOLCJNKE;
      if (__this_01 == (System_Collections_Generic_List_bool____o *)0x0) goto LAB_0310f878;
      handle.fields.value =
           (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)FBBNEILNOKK_var;
      iVar1 = (__this_01->fields)._size;
    }
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,ABACOMLKIAJ,
                        Method_System_Collections_Generic_List<bool[]>_get_Item__);
    if (pIVar5 != (Il2CppObject *)0x0) {
      if ((uint)AAJGEHHPMGH < *(uint *)&pIVar5[1].monitor) {
        *(undefined1 *)((long)&pIVar5[2].klass + (long)AAJGEHHPMGH) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0310f878:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x300ED08]
// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$.ctor @ RVA 0x300ED08

void Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML___ctor
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_bool____o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ba1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<bool[]>_TypeInfo);
    DAT_04565ba1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_bool____o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<bool[]>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<bool[]>__ctor__);
  (__this->fields).MFKHOLCJNKE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

