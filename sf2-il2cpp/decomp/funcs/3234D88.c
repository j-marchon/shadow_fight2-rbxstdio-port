// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BDGMIPJPICN @ RVA 0x3234D88

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BDGMIPJPICN
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,
               Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *BCJJJBOCPJJ,
               bool OFKBEIFPFMN,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o **ppNVar3;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *x;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456701c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<ControlsInfoCategoryContent>_GetEnumerator__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456701c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  ppNVar3 = &(__this->fields).PDGBIIFJGDO;
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (*ppNVar3 == (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0)
    goto LAB_03334f20;
    Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Unselect(*ppNVar3,(MethodInfo *)0x0);
  }
  *ppNVar3 = BCJJJBOCPJJ;
  thunk_FUN_01c20e04(ppNVar3,BCJJJBOCPJJ);
  if (*ppNVar3 != (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0) {
    Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Select
              (*ppNVar3,OFKBEIFPFMN,(MethodInfo *)0x0);
    __this_00 = (__this->fields).GJACCPEHHFL;
    if (__this_00 != (System_Collections_Generic_List_ControlsInfoCategoryContent__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<ControlsInfoCategoryContent>_GetEnumerator__
                );
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_MoveNext__
                          );
        pIVar1 = local_60.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryContent>_Dispose__
                    );
          return;
        }
        if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0
                              );
        if (*ppNVar3 == (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
        UnityEngine_GameObject__SetActive
                  (__this_01,
                   *(int *)&((UnityEngine_Component_o *)((long)pIVar1 + 0x18))->monitor ==
                   ((*ppNVar3)->fields)._Category,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_03334f20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

