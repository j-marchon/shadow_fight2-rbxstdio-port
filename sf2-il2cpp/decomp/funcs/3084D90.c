// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$Update @ RVA 0x3084D90

void Nekki_SF2_GUI_Pvp_RandomSelectionModule__Update
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (__this->fields).KCLCLHMMDJO;
  if (0.0 <= fVar4) {
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = (__this->fields)._SlowFactor;
    fVar2 = (__this->fields).HDADKFPCEGM;
    fVar4 = fVar4 + fVar1 * fVar3;
    (__this->fields).KCLCLHMMDJO = fVar4;
    method_01 = method_00;
    if (fVar2 < fVar4) {
      (__this->fields).KCLCLHMMDJO = fVar4 - fVar2;
      (__this->fields).HDADKFPCEGM = fVar3 * fVar2;
      Nekki_SF2_GUI_Pvp_RandomSelectionModule__ELJPNGLJAPJ(__this,method_00);
      fVar2 = (__this->fields).HDADKFPCEGM;
      method_01 = extraout_x1;
    }
    if ((__this->fields)._EndTimer < fVar2) {
      (__this->fields).KCLCLHMMDJO = -1.0;
      routine = Nekki_SF2_GUI_Pvp_RandomSelectionModule__KBEPLOJMFCL(__this,method_01);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

