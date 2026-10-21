// InControl.TwoAxisInputControl$$Update @ RVA 0x35C2F60

void InControl_TwoAxisInputControl__Update
               (InControl_TwoAxisInputControl_o *__this,float x,float y,uint64_t updateTick,
               MethodInfo *method)

{
  bool bVar1;
  InControl_OneAxisInputControl_o *pIVar2;
  float fVar3;
  float fVar4;
  float stateThreshold;
  
  if ((DAT_04568f4e & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 036c2fa0 to 037c2fa7 has its CatchHandler @ 036c3048 */
    FUN_01bab630(&InControl_TwoAxisInputControl_TypeInfo);
    DAT_04568f4e = 1;
  }
  pIVar2 = (__this->fields)._Left_k__BackingField;
  (__this->fields)._X_k__BackingField = x;
  (__this->fields)._Y_k__BackingField = y;
  (__this->fields).lastState = (__this->fields).thisState;
  if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
    fVar3 = -x;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    if (0.0 < x) {
      fVar3 = 0.0;
    }
                    /* try { // try from 036c2ff0 to 037c300b has its CatchHandler @ 036c3044 */
    InControl_OneAxisInputControl__UpdateWithValue
              (pIVar2,fVar3,updateTick,
               InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
               (MethodInfo *)0x0);
    pIVar2 = (__this->fields)._Right_k__BackingField;
    if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
      fVar4 = (__this->fields)._X_k__BackingField;
                    /* try { // try from 036c300c to 037c302f has its CatchHandler @ 036c2ed0 */
      fVar3 = fVar4;
      if (1.0 < fVar4) {
        fVar3 = 1.0;
      }
      if (fVar4 < 0.0) {
        fVar3 = 0.0;
      }
      InControl_OneAxisInputControl__UpdateWithValue
                (pIVar2,fVar3,updateTick,
                 InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
                 (MethodInfo *)0x0);
                    /* try { // try from 036c3030 to 037c303f has its CatchHandler @ 036c3050 */
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 036c3040 to 037c3067 has its CatchHandler @ 036c2ed0 */
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2ff0 with catch @ 036c3044
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2fa0 with catch @ 036c3048
                        */
      pIVar2 = (__this->fields)._Up_k__BackingField;
      fVar3 = (__this->fields)._Y_k__BackingField;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3030 with catch @ 036c3050
                        */
      if (InControl_InputManager_TypeInfo->static_fields->InvertYAxis == false) {
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
        fVar4 = fVar3;
        if (1.0 < fVar3) {
          fVar4 = 1.0;
        }
                    /* try { // try from 036c30c4 to 037c31cf has its CatchHandler @ 036c30c4
                       catch() { ... } // from try @ 036c30c4 with catch @ 036c30c4
                       catch() { ... } // from try @ 036c324c with catch @ 036c30c4
                       catch() { ... } // from try @ 036c3288 with catch @ 036c30c4
                       catch() { ... } // from try @ 036c32e8 with catch @ 036c30c4
                       catch() { ... } // from try @ 036c3318 with catch @ 036c30c4 */
        if (fVar3 < 0.0) {
          fVar4 = 0.0;
        }
        InControl_OneAxisInputControl__UpdateWithValue
                  (pIVar2,fVar4,updateTick,
                   InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
                   (MethodInfo *)0x0);
        pIVar2 = (__this->fields)._Down_k__BackingField;
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
        fVar4 = (__this->fields)._Y_k__BackingField;
        fVar3 = -fVar4;
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        stateThreshold = InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold;
        if (0.0 < fVar4) {
          fVar3 = 0.0;
        }
      }
      else {
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
        fVar4 = -fVar3;
                    /* try { // try from 036c3068 to 037c306b has its CatchHandler @ 036c308c */
        if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
                    /* try { // try from 036c306c to 037c3093 has its CatchHandler @ 036c2ed0 */
        if (0.0 < fVar3) {
          fVar4 = 0.0;
        }
        InControl_OneAxisInputControl__UpdateWithValue
                  (pIVar2,fVar4,updateTick,
                   InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036c3068 with catch @ 036c308c */
        pIVar2 = (__this->fields)._Down_k__BackingField;
        if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
                    /* try { // try from 036c3094 to 037c309b has its CatchHandler @ 036c30b0 */
        fVar4 = (__this->fields)._Y_k__BackingField;
                    /* try { // try from 036c309c to 037c30a7 has its CatchHandler @ 036c2ed0 */
        fVar3 = fVar4;
        if (1.0 < fVar4) {
          fVar3 = 1.0;
        }
                    /* try { // try from 036c30a8 to 037c30af has its CatchHandler @ 036c30b0 */
        if (fVar4 < 0.0) {
          fVar3 = 0.0;
        }
        stateThreshold = InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c3094 with catch @ 036c30b0
                       catch(type#2 @ 00000000) { ... } // from try @ 036c30a8 with catch @ 036c30b0
                        */
      }
      InControl_OneAxisInputControl__UpdateWithValue
                (pIVar2,fVar3,updateTick,stateThreshold,(MethodInfo *)0x0);
      pIVar2 = (__this->fields)._Up_k__BackingField;
      if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
        bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = true;
LAB_036c3190:
          (__this->fields).thisState = bVar1;
          if ((__this->fields).thisState != (__this->fields).lastState) {
            (__this->fields)._UpdateTick_k__BackingField = updateTick;
          }
          return;
        }
        pIVar2 = (__this->fields)._Down_k__BackingField;
        if (pIVar2 != (InControl_OneAxisInputControl_o *)0x0) {
          bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = true;
          }
          else {
            pIVar2 = (__this->fields)._Left_k__BackingField;
            if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
            bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = true;
            }
            else {
              pIVar2 = (__this->fields)._Right_k__BackingField;
              if (pIVar2 == (InControl_OneAxisInputControl_o *)0x0) goto LAB_036c31c0;
              bVar1 = InControl_OneAxisInputControl__get_State(pIVar2,(MethodInfo *)0x0);
            }
          }
          if (__this != (InControl_TwoAxisInputControl_o *)0x0) goto LAB_036c3190;
        }
      }
    }
  }
LAB_036c31c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

