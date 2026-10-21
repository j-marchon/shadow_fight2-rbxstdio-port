// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$PFAHHIBDFHF @ RVA 0x3170F5C

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__PFAHHIBDFHF
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  PBAKFOBIHEG_o *pPVar5;
  VirtualInvokeData *pVVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  UnityEngine_UI_Image_o *pUVar11;
  System_Collections_IEnumerator_o *pSVar12;
  UnityEngine_Vector3_o endValue;
  
  if ((DAT_04566921 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566921 = 1;
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  DG_Tweening_ShortcutExtensions__DOComplete
            ((UnityEngine_Component_o *)pUVar3,false,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (DAT_0455fa7e == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa7e = '\x01';
  }
  endValue.fields.z = 0.0;
  endValue.fields._0_8_ = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields;
  DG_Tweening_ShortcutExtensions__DOScale(pUVar3,endValue,0.5,(MethodInfo *)0x0);
  pUVar11 = (__this->fields).JDDOPDPMFGJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar11 = (__this->fields).JDDOPDPMFGJ;
    if ((pUVar11 == (UnityEngine_UI_Image_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03271128;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._FillImage;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
              ((__this->fields).PNDDALIFKEK.fields.r,(__this->fields).PNDDALIFKEK.fields.g,
               (__this->fields).PNDDALIFKEK.fields.b,(__this->fields).PNDDALIFKEK.fields.a,pNVar4,
               (pNVar4->klass->vtable)._23_set_color.method);
    ppSVar10 = &(__this->fields).CBILKJAEFOM;
    if (*ppSVar10 == (System_Collections_IEnumerator_o *)0x0) {
      return;
    }
    pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar5->klass;
      pSVar12 = *ppSVar10;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar7->vtable + (*piVar9 + 1);
            goto LAB_032710fc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,1);
LAB_032710fc:
      (*pVVar6->methodPtr)(pPVar5,pSVar12,pVVar6->method);
      *ppSVar10 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar10,0);
      return;
    }
  }
LAB_03271128:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

