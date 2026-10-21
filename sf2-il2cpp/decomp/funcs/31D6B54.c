// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$JJONOCGMEMK @ RVA 0x31D6B54

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__JJONOCGMEMK
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = UnityEngine_Transform__get_localPosition(pUVar1,(MethodInfo *)0x0);
    fVar2 = UVar6.fields.x;
    fVar5 = (__this->fields)._ABKFKMLEFHA_k__BackingField;
    if (fVar2 == fVar5) {
      return;
    }
    fVar4 = -10.0;
    if (fVar2 <= fVar5) {
      fVar4 = 10.0;
    }
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      fVar3 = fVar2 + fVar4;
      if (fVar5 < fVar2 == fVar2 + fVar4 <= fVar5) {
        fVar3 = fVar5;
      }
      UVar6.fields.x = fVar3;
      UVar6.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar1,UVar6,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

