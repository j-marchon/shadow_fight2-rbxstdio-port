// Nekki.SF2.GUI.Profile.BattlePassRewardCell$$ENEJJGDDBGI @ RVA 0x32C85A8

void Nekki_SF2_GUI_Profile_BattlePassRewardCell__ENEJJGDDBGI
               (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this,System_String_o *OOKEKJMFKPE,
               System_String_o *HCAAAAMDCNO,bool LECNADPGFOM,float JKOJPEKLBCI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  BCOICIIDFPD_o *pBVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
                    /* catch() { ... } // from try @ 033c7c80 with catch @ 033c85a8 */
                    /* catch() { ... } // from try @ 033c8190 with catch @ 033c85ac
                       catch() { ... } // from try @ 033c8198 with catch @ 033c85ac */
                    /* catch() { ... } // from try @ 033c7cdc with catch @ 033c85b0 */
                    /* try { // try from 033c85c0 to 034c85c3 has its CatchHandler @ 033c85d4 */
  if ((DAT_04567502 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c85c0 with catch @ 033c85d4 */
    FUN_01bab630(&StringLiteral_8095);
                    /* try { // try from 033c85dc to 034c8643 has its CatchHandler @ 033c8658 */
    DAT_04567502 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseRewardCell__ENEJJGDDBGI
            ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this,OOKEKJMFKPE,HCAAAAMDCNO,LECNADPGFOM,
             0.0,(MethodInfo *)0x0);
  pBVar3 = (__this->fields).super.RewardData;
  if (pBVar3 != (BCOICIIDFPD_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((pBVar3->fields)._JHGGGMJEENP_k__BackingField,StringLiteral_8095,
                       (MethodInfo *)0x0);
    pNVar4 = (__this->fields).super.SlotImage;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
      if (bVar1) {
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_033c86f0;
                    /* try { // try from 033c8644 to 034c864f has its CatchHandler @ 033c79c8 */
        fVar5 = 0.28;
        fVar7 = 0.0;
        fVar6 = fVar5;
                    /* try { // try from 033c8650 to 034c8657 has its CatchHandler @ 033c8658 */
      }
      else {
                    /* catch() { ... } // from try @ 033c8250 with catch @ 033c8658
                       catch() { ... } // from try @ 033c8584 with catch @ 033c8658
                       catch() { ... } // from try @ 033c85dc with catch @ 033c8658
                       catch() { ... } // from try @ 033c8650 with catch @ 033c8658 */
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_033c86f0;
        UVar8 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
        fVar5 = UVar8.fields.x * 0.7;
        fVar6 = UVar8.fields.y * 0.7;
        fVar7 = UVar8.fields.z * 0.7;
      }
      UVar8.fields.y = fVar6;
      UVar8.fields.x = fVar5;
      UVar8.fields.z = fVar7;
      UnityEngine_Transform__set_localScale(pUVar2,UVar8,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super.SlotImage;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        if (DAT_0455fa77 == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa77 = '\x01';
        }
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar2,(UnityEngine_Vector3_o)
                            (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_033c86f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

