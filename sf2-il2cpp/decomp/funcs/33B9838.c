// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$KLPHOMAJAGO @ RVA 0x33B9838

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__KLPHOMAJAGO
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  MPMBFKHOAKB_o *pMVar5;
  il2cpp_array_size_t iVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567d94 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Last<string>__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04567d94 = 1;
  }
  pMVar5 = (__this->fields).DKMMBMBMJBO;
  if ((pMVar5 != (MPMBFKHOAKB_o *)0x0) &&
     (pSVar7 = (pMVar5->fields).JMMIJNFKAAN, pSVar7 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0);
    pNVar8 = (__this->fields).Portrait;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    pSVar2 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    if (pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      *(System_String_o **)&(pNVar8->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
      thunk_FUN_01c20e04(&(pNVar8->fields).super.m_PixelsPerUnitMultiplier);
      pNVar8 = (__this->fields).Portrait;
      pSVar3 = System_String__Split(pSVar7,0x2f,0,(MethodInfo *)0x0);
      pSVar7 = (System_String_o *)
               System_Linq_Enumerable__Last<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                          Method_System_Linq_Enumerable_Last<string>__);
      if ((pSVar7 != (System_String_o *)0x0) &&
         (pSVar3 = System_String__Split(pSVar7,0x2e,0,(MethodInfo *)0x0),
         pSVar3 != (System_String_array *)0x0)) {
        if ((int)pSVar3->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (((pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
            (Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                       (pNVar8,pSVar3->m_Items[0],(MethodInfo *)0x0),
            pSVar1 != (System_String_array *)0x0)) &&
           (pNVar8 = (__this->fields).Portrait, pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
          iVar6 = pSVar1->max_length;
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,0.0,(MethodInfo *)0x0);
          pNVar8 = (__this->fields).Portrait;
          if (pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionX(pUVar4,-500.0,(MethodInfo *)0x0);
            pNVar8 = (__this->fields).Portrait;
            if (pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              (*(pNVar8->klass->vtable)._45_SetNativeSize.methodPtr)
                        (pNVar8,(pNVar8->klass->vtable)._45_SetNativeSize.method);
              pNVar8 = (__this->fields).Portrait;
              if ((pNVar8 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                value.fields.x = *(undefined4 *)(&DAT_00d81a30 + (ulong)(1 < (int)iVar6) * 4);
                value.fields.y = 1.8;
                value.fields.z = 0.0;
                UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
                return;
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

