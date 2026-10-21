// Nekki.SF2.GUI.TextPic$$ELMFBJIPKHJ @ RVA 0x30B45A0

void Nekki_SF2_GUI_TextPic__ELMFBJIPKHJ
               (Nekki_SF2_GUI_TextPic_o *__this,bool CNHLCHHDHCF,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *y;
  Nekki_SF2_GUI_TextDebugger_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar6;
  Nekki_SF2_GUI_Glyphs_Glyph_o *__this_01;
  uint uVar7;
  
  if ((DAT_04566204 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Glyph>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566204 = 1;
  }
  pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,true,
                      Method_UnityEngine_Component_GetComponentsInChildren<Glyph>__);
  if (pSVar4 != (System_Object_array *)0x0) {
    uVar2 = (uint)pSVar4->max_length;
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this_01 = (Nekki_SF2_GUI_Glyphs_Glyph_o *)pSVar4->m_Items[(int)uVar7];
        if ((__this_01 == (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_031b4720;
        pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0);
        y = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        method_00 = (MethodInfo *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)y,
                           (MethodInfo *)0x0);
        if (!bVar3) {
          if (CNHLCHHDHCF) {
            __this_00 = (__this->fields).IHEKNEDMHDK;
            if (__this_00 == (Nekki_SF2_GUI_TextDebugger_o *)0x0) goto LAB_031b4720;
            Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__ECKFHNINNIN
                      ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_00,__this_01,method_00);
          }
          else {
            Nekki_SF2_GUI_Glyphs_Glyph__Destroy(__this_01,(MethodInfo *)0x0);
          }
        }
        uVar2 = (uint)pSVar4->max_length;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
    }
    pNVar6 = (__this->fields).NMHDAIIIHFP;
    if (pNVar6 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
      length = *(int32_t *)&pNVar6[1].klass;
      iVar1 = *(int *)((long)&pNVar6[1].klass + 4);
      *(undefined4 *)&pNVar6[1].klass = 0;
      *(int *)((long)&pNVar6[1].klass + 4) = iVar1 + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pNVar6->fields).CNFAHCPFONL,0,length,
                            (MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_031b4720:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

