// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$Update @ RVA 0x328F220

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__Update
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  GEBHIBIEAJE_o *pGVar2;
  IEFEBEDLHNN_o *pIVar3;
  IEFEBEDLHNN_o *pIVar4;
  CNDPAJOLKFN_o *pCVar5;
  CNDPAJOLKFN_o *pCVar6;
  float fVar7;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_78;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  pGVar2 = (__this->fields).MOBCMLECDOO;
  if ((((pGVar2 != (GEBHIBIEAJE_o *)0x0) &&
       (pIVar4 = (pGVar2->fields)._HDEPMIOPNAJ_k__BackingField, pIVar4 != (IEFEBEDLHNN_o *)0x0)) &&
      (pIVar3 = (pGVar2->fields)._GNLFCODFOOM_k__BackingField, pIVar3 != (IEFEBEDLHNN_o *)0x0)) &&
     ((pCVar5 = (pIVar4->fields).CNMHHKAMGPI, pCVar5 != (CNDPAJOLKFN_o *)0x0 &&
      (pUVar1 = (__this->fields).ICLKKKJNGGO, pUVar1 != (UnityEngine_LineRenderer_o *)0x0)))) {
    pCVar6 = (pIVar3->fields).CNMHHKAMGPI;
    position.fields.z = -1.0;
    position.fields.x = (pCVar5->fields).super.OHHDBINAJCB;
    position.fields.y = (pCVar5->fields).super.JOLEIODMLFL;
    UnityEngine_LineRenderer__SetPosition(pUVar1,0,position,(MethodInfo *)0x0);
    if ((pCVar6 != (CNDPAJOLKFN_o *)0x0) &&
       (pUVar1 = (__this->fields).ICLKKKJNGGO, pUVar1 != (UnityEngine_LineRenderer_o *)0x0)) {
      position_00.fields.z = -1.0;
      position_00.fields.x = (pCVar6->fields).super.OHHDBINAJCB;
      position_00.fields.y = (pCVar6->fields).super.JOLEIODMLFL;
      UnityEngine_LineRenderer__SetPosition(pUVar1,1,position_00,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).MOBCMLECDOO;
      if (pGVar2 != (GEBHIBIEAJE_o *)0x0) {
        local_60.fakeValueActive = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValueActive;
        local_60.inited = (pGVar2->fields).MPJJBPFKHIB.fields.inited;
        local_60._18_2_ = *(undefined2 *)&(pGVar2->fields).MPJJBPFKHIB.fields.field_0x12;
        local_60.hiddenValueOldByte4.fields =
             (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
        local_60.fakeValue = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValue;
        local_60.currentCryptoKey = (pGVar2->fields).MPJJBPFKHIB.fields.currentCryptoKey;
        local_60.hiddenValue = (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValue;
        fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                           (MethodInfo *)0x0);
        if (fVar7 <= 0.0) {
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_78,1.0,
                     (MethodInfo *)0x0);
          local_40.hiddenValueOldByte4.fields = local_78.hiddenValueOldByte4.fields;
          local_40.fakeValue = local_78.fakeValue;
          local_40.currentCryptoKey = local_78.currentCryptoKey;
          local_40.hiddenValue = local_78.hiddenValue;
          local_40.fakeValueActive = local_78.fakeValueActive;
          local_40.inited = local_78.inited;
          local_40._18_2_ = local_78._18_2_;
        }
        else {
          pGVar2 = (__this->fields).MOBCMLECDOO;
          if (pGVar2 == (GEBHIBIEAJE_o *)0x0) goto LAB_0338f354;
          local_40.fakeValueActive = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValueActive;
          local_40.inited = (pGVar2->fields).MPJJBPFKHIB.fields.inited;
          local_40._18_2_ = *(undefined2 *)&(pGVar2->fields).MPJJBPFKHIB.fields.field_0x12;
          local_40.hiddenValueOldByte4.fields =
               (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
          local_40.fakeValue = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValue;
          local_40.currentCryptoKey = (pGVar2->fields).MPJJBPFKHIB.fields.currentCryptoKey;
          local_40.hiddenValue = (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValue;
        }
        local_90.hiddenValueOldByte4.fields = local_40.hiddenValueOldByte4.fields;
        local_90.fakeValue = local_40.fakeValue;
        local_90.currentCryptoKey = local_40.currentCryptoKey;
        local_90.hiddenValue = local_40.hiddenValue;
        local_90.fakeValueActive = local_40.fakeValueActive;
        local_90.inited = local_40.inited;
        local_90._18_2_ = local_40._18_2_;
        fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                           (MethodInfo *)0x0);
        pUVar1 = (__this->fields).ICLKKKJNGGO;
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__set_startWidth(pUVar1,fVar7,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).ICLKKKJNGGO;
          if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
            UnityEngine_LineRenderer__set_endWidth(pUVar1,fVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0338f354:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

