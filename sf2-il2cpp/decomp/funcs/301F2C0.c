// Nekki.SF2.GUI.CompositeImage$$set_Data @ RVA 0x301F2C0

void Nekki_SF2_GUI_CompositeImage__set_Data
               (Nekki_SF2_GUI_CompositeImage_o *__this,IGNEHHMICKB_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  uint uVar1;
  long lVar2;
  UnityEngine_RectTransform_o *pUVar3;
  System_Collections_Generic_List_ResolutionImage__o *pSVar4;
  Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB;
  UnityEngine_GameObject_o *pUVar5;
  Nekki_SF2_GUI_CompositeImage_o *IMMNELPBGIF;
  UnityEngine_Component_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  IGNEHHMICKB_o *pIVar6;
  System_Collections_Generic_List_DCEAMLCCDHH__o *pSVar7;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar8;
  IGNEHHMICKB_o **ppIVar9;
  int index;
  int index_00;
  
  if ((DAT_04565c3a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCEAMLCCDHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCEAMLCCDHH>_get_Item__);
    DAT_04565c3a = 1;
  }
  ppIVar9 = &(__this->fields).IECPOKCOKIC;
  *ppIVar9 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppIVar9,CJNHFNHJHPE);
  pIVar6 = *ppIVar9;
  if (pIVar6 == (IGNEHHMICKB_o *)0x0) {
    index_00 = 0;
LAB_0311f4d8:
    pSVar4 = (__this->fields).OGFIAFLMLKI;
    while (pSVar4 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
      if ((pSVar4->fields)._size <= index_00) {
        return;
      }
      __this_00 = (UnityEngine_Component_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,index_00,
                             Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
      if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) break;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      index_00 = index_00 + 1;
      pSVar4 = (__this->fields).OGFIAFLMLKI;
    }
    goto LAB_0311f520;
  }
  method_01 = method_00;
  if (0.0 < (pIVar6->fields)._BEEGDJFPEHO_k__BackingField) {
    pUVar3 = Nekki_SF2_GUI_CompositeImage__get_RectTransform(__this,method_00);
    pIVar6 = (__this->fields).IECPOKCOKIC;
    if ((pIVar6 == (IGNEHHMICKB_o *)0x0) || (pUVar3 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_0311f520;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
              (pUVar3,0,(pIVar6->fields)._BEEGDJFPEHO_k__BackingField,(MethodInfo *)0x0);
    pIVar6 = *ppIVar9;
    method_01 = extraout_x1;
    if (pIVar6 == (IGNEHHMICKB_o *)0x0) goto LAB_0311f520;
  }
  if (0.0 < (pIVar6->fields)._IJMMLDDCHFB_k__BackingField) {
    pUVar3 = Nekki_SF2_GUI_CompositeImage__get_RectTransform(__this,method_01);
    pIVar6 = (__this->fields).IECPOKCOKIC;
    if ((pIVar6 == (IGNEHHMICKB_o *)0x0) || (pUVar3 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_0311f520;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
              (pUVar3,1,(pIVar6->fields)._IJMMLDDCHFB_k__BackingField,(MethodInfo *)0x0);
    pIVar6 = *ppIVar9;
    method_01 = extraout_x1_00;
    if (pIVar6 == (IGNEHHMICKB_o *)0x0) goto LAB_0311f520;
  }
  index = 0;
  while (pSVar7 = (pIVar6->fields)._PDJNNFIEOCM_k__BackingField,
        pSVar7 != (System_Collections_Generic_List_DCEAMLCCDHH__o *)0x0) {
    index_00 = (pSVar7->fields)._size;
    if (index_00 <= index) goto LAB_0311f4d8;
    pSVar4 = (__this->fields).OGFIAFLMLKI;
    if (pSVar4 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) break;
    if (index < (pSVar4->fields)._size) {
      IEPECMCLKJB = (Nekki_SF2_GUI_ResolutionImage_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar4,index,
                               Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    }
    else {
      IEPECMCLKJB = Nekki_SF2_GUI_CompositeImage__HFBOFKPLLBG(__this,method_01);
      lVar2 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
      pSVar4 = (__this->fields).OGFIAFLMLKI;
      if (pSVar4 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) break;
      pNVar8 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pNVar8 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) break;
      uVar1 = (pSVar4->fields)._size;
      if (uVar1 < (uint)pNVar8->max_length) {
        (pSVar4->fields)._size = uVar1 + 1;
        pNVar8->m_Items[(int)uVar1] = IEPECMCLKJB;
        thunk_FUN_01c20e04(pNVar8->m_Items + (int)uVar1,IEPECMCLKJB);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)IEPECMCLKJB,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    if ((IEPECMCLKJB == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)IEPECMCLKJB,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) break;
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    if ((*ppIVar9 == (IGNEHHMICKB_o *)0x0) ||
       (pSVar7 = ((*ppIVar9)->fields)._PDJNNFIEOCM_k__BackingField,
       pSVar7 == (System_Collections_Generic_List_DCEAMLCCDHH__o *)0x0)) break;
    IMMNELPBGIF = (Nekki_SF2_GUI_CompositeImage_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar7,index,
                             Method_System_Collections_Generic_List<DCEAMLCCDHH>_get_Item__);
    Nekki_SF2_GUI_CompositeImage__GOCHBKFOOBM
              (IMMNELPBGIF,IEPECMCLKJB,(DCEAMLCCDHH_o *)IMMNELPBGIF,in_x3);
    pIVar6 = *ppIVar9;
    index = index + 1;
    method_01 = extraout_x1_01;
    if (pIVar6 == (IGNEHHMICKB_o *)0x0) break;
  }
LAB_0311f520:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

