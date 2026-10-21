// TypeDefIndex 146
// Namespace: Nekki.SF2.GUI
// public class CompositeImage : MonoBehaviour
// Fields:
//   private ResolutionImage _baseImage; // 0x20
//   private List<ResolutionImage> OGFIAFLMLKI; // 0x28
//   private IGNEHHMICKB IECPOKCOKIC; // 0x30
//   private RectTransform EFGNJDHAIDC; // 0x38

// ===== private ResolutionImage HFBOFKPLLBG()  [RVA 0x301EF60]
// Nekki.SF2.GUI.CompositeImage$$HFBOFKPLLBG @ RVA 0x301EF60

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_CompositeImage__HFBOFKPLLBG(Nekki_SF2_GUI_CompositeImage_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *p;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04565c37 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_7548/*"InnerImage"*/);
    DAT_04565c37 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._baseImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._baseImage;
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pNVar3,pUVar2,
                        Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    return pNVar3;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_7548/*"InnerImage"*/,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__),
     pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar2,p,(MethodInfo *)0x0);
      return pNVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GOCHBKFOOBM(ResolutionImage IEPECMCLKJB, DCEAMLCCDHH IMMNELPBGIF)  [RVA 0x301F0C4]
// Nekki.SF2.GUI.CompositeImage$$GOCHBKFOOBM @ RVA 0x301F0C4

void Nekki_SF2_GUI_CompositeImage__GOCHBKFOOBM
               (Nekki_SF2_GUI_CompositeImage_o *__this,Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,
               DCEAMLCCDHH_o *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  
  if ((DAT_04565c38 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    DAT_04565c38 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IEPECMCLKJB->klass->_2).naturalAligment) &&
       ((IEPECMCLKJB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) {
      Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly
                ((Nekki_SF2_GUI_ResolutionImageAvatar_o *)IEPECMCLKJB,(MethodInfo *)0x0);
    }
    if ((IMMNELPBGIF != (DCEAMLCCDHH_o *)0x0) &&
       (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      *(System_String_o **)&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier =
           (IMMNELPBGIF->fields)._MLEPHDNBABJ_k__BackingField;
      thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (IEPECMCLKJB,(IMMNELPBGIF->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      (*(IEPECMCLKJB->klass->vtable)._23_set_color.methodPtr)
                ((IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.r,
                 (IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.g,
                 (IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.b,
                 (IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.a,IEPECMCLKJB,
                 (IEPECMCLKJB->klass->vtable)._23_set_color.method);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)IEPECMCLKJB,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar2,(UnityEngine_Vector3_o)
                          (IMMNELPBGIF->fields)._ABODODGIMOO_k__BackingField.fields,
                   (MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)IEPECMCLKJB,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalRotationZ
                  (pUVar2,(IMMNELPBGIF->fields)._HBNMFCBCBMD_k__BackingField,(MethodInfo *)0x0);
        (*(IEPECMCLKJB->klass->vtable)._45_SetNativeSize.methodPtr)
                  (IEPECMCLKJB,(IEPECMCLKJB->klass->vtable)._45_SetNativeSize.method);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)IEPECMCLKJB,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale
                    (pUVar2,(UnityEngine_Vector3_o)
                            (IMMNELPBGIF->fields)._POODCHFIIJJ_k__BackingField.fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_RectTransform()  [RVA 0x301F1F4]
// Nekki.SF2.GUI.CompositeImage$$get_RectTransform @ RVA 0x301F1F4

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_CompositeImage__get_RectTransform
          (Nekki_SF2_GUI_CompositeImage_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  bool bVar3;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  
  if ((DAT_04565c39 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565c39 = 1;
    method = extraout_x1;
  }
  ppUVar4 = &(__this->fields).EFGNJDHAIDC;
  pUVar5 = *ppUVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_RectTransform_TypeInfo;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
      *ppUVar4 = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar1 = pUVar5;
      if (pUVar5->klass != UnityEngine_RectTransform_TypeInfo) {
        pUVar1 = (UnityEngine_RectTransform_o *)0x0;
      }
      *ppUVar4 = pUVar1;
      if (pUVar5->klass != pUVar2) {
        pUVar5 = (UnityEngine_RectTransform_o *)0x0;
      }
    }
    thunk_FUN_01c20e04(ppUVar4,pUVar5);
  }
  return *ppUVar4;
}


// ===== public void set_Data(IGNEHHMICKB CJNHFNHJHPE)  [RVA 0x301F2C0]
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


// ===== public IGNEHHMICKB get_Data()  [RVA 0x301F538]
// Nekki.SF2.GUI.CompositeImage$$get_Data @ RVA 0x301F538

IGNEHHMICKB_o *
Nekki_SF2_GUI_CompositeImage__get_Data(Nekki_SF2_GUI_CompositeImage_o *__this,MethodInfo *method)

{
  return (__this->fields).IECPOKCOKIC;
}


// ===== public void .ctor()  [RVA 0x301F540]
// Nekki.SF2.GUI.CompositeImage$$.ctor @ RVA 0x301F540

void Nekki_SF2_GUI_CompositeImage___ctor(Nekki_SF2_GUI_CompositeImage_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c3b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    DAT_04565c3b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ResolutionImage__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
  ppSVar1 = &(__this->fields).OGFIAFLMLKI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

