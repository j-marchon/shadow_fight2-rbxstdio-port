// IGFJINHNIBB$$NLFEEBKDJKF @ RVA 0x31EA8B4

void IGFJINHNIBB__NLFEEBKDJKF(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 032ea8c8 to 033ea8cf has its CatchHandler @ 032ea9ec */
  if ((DAT_04566d90 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d90 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032ea8e8 to 033ea8ef has its CatchHandler @ 032eaa00 */
  bVar1 = IGFJINHNIBB__CAINGGNGNFO(__this,method);
  if (bVar1) {
    (__this->fields).NHKGELJJNEJ = 0.0;
  }
  else {
    fVar5 = (__this->fields).NHKGELJJNEJ;
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
                    /* try { // try from 032ea908 to 033ea90f has its CatchHandler @ 032ea9f4 */
    fVar4 = (float)NEON_fminnm(fVar4,0x3f800000);
    fVar5 = fVar5 + fVar4;
                    /* try { // try from 032ea910 to 033ea9c3 has its CatchHandler @ 032ea6e0 */
    (__this->fields).NHKGELJJNEJ = fVar5;
    if (30.0 <= fVar5) {
      pLVar3 = (__this->fields)._OBENPAJAMCP_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        pLVar3 = (__this->fields)._OBENPAJAMCP_k__BackingField;
        if ((pLVar3 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          pLVar3 = (__this->fields)._OBENPAJAMCP_k__BackingField;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}

