// Nekki.SF2.GUI.Map.RaidKeysRowView$$IsSuitableToRender @ RVA 0x33278D0

bool Nekki_SF2_GUI_Map_RaidKeysRowView__IsSuitableToRender
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,
               System_Collections_Generic_List_NPKKNCCEIND__o *IFFLAAMFALK,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar3 = Util__EGNDHMHOPCG((__this->fields)._maxScreenRatio,(__this->fields)._minScreenRatioWidth,
                            *(float *)&(__this->fields).super.field_0x1c,
                            (__this->fields)._minScreenRatio,(float)iVar1 / (float)iVar2,
                            (MethodInfo *)0x0);
  fVar4 = Nekki_SF2_GUI_Map_RaidKeysRowView__GetApproxWidth(__this,IFFLAAMFALK,method);
  return fVar4 <= fVar3;
}

