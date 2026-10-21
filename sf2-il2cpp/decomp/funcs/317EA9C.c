// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$SetItems @ RVA 0x317EA9C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetItems
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               System_Collections_Generic_List_IILNJJJFGLL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  System_Collections_Generic_List_IILNJJJFGLL__o **ppSVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045669aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ClanLogoAttributeCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_GetEnumerator__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045669aa = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  ppSVar4 = &(__this->fields).KNPKLNHJLEN;
  *ppSVar4 = GHAAKPDHIJJ;
  (__this->fields).PNIMHIAPIMJ = false;
  thunk_FUN_01c20e04(ppSVar4,GHAAKPDHIJJ);
  pNVar3 = (__this->fields)._scroll;
  if ((pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar3,(MethodInfo *)0x0),
     GHAAKPDHIJJ != (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<IILNJJJFGLL>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_MoveNext__
                             ), pIVar1 = local_70.fields._current, bVar2) {
      pUVar5 = (__this->fields)._sliderItemPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar5 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar5,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar5,
                               Method_UnityEngine_GameObject_GetComponent<ClanLogoAttributeCell>__);
      pNVar3 = (__this->fields)._scroll;
      if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_SimpleScroll__AddItem(pNVar3,IKKAMAMLIKA,true,(MethodInfo *)0x0);
      if (IKKAMAMLIKA == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(code *)IKKAMAMLIKA->klass[1]._1.name)
                (IKKAMAMLIKA,pIVar1,(__this->fields)._scroll,IKKAMAMLIKA->klass[1]._1.namespaze);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_Dispose__);
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ScrollToMedium(pNVar3,0.0,8,(MethodInfo *)0x0);
      (__this->fields).PNIMHIAPIMJ = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

