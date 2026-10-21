// HJNDPNIMBBG$$EMBBBGLKPNN @ RVA 0x35C5288

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Color_o HJNDPNIMBBG__EMBBBGLKPNN(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  System_Nullable_Color__o *pSVar1;
  MethodInfo *extraout_x1;
  System_Nullable_Color__o *__this_00;
  UnityEngine_Color_Fields UVar2;
  System_Nullable_Color__Fields local_58;
  System_Nullable_Color__Fields local_40;
  
  if ((DAT_04568f5d & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    DAT_04568f5d = 1;
    method = extraout_x1;
  }
  __this_00 = &(__this->fields).GDJDEBNNDOO;
  if ((__this_00->fields).hasValue == false) {
    HJNDPNIMBBG__NDHNMCOKAEB((System_Nullable_Color__o *)&local_58,__this,method);
    local_40.value.fields.a = local_58.value.fields.a;
    local_40.value.fields.g = local_58.value.fields.g;
    local_40.value.fields.b = local_58.value.fields.b;
    local_40.hasValue = local_58.hasValue;
    local_40._1_3_ = local_58._1_3_;
    local_40.value.fields.r = local_58.value.fields.r;
    (__this->fields).GDJDEBNNDOO.fields.value.fields.a = local_58.value.fields.a;
    pSVar1 = &(__this->fields).GDJDEBNNDOO;
                    /* try { // try from 036c52f8 to 037c538f has its CatchHandler @ 036c52f8
                       catch() { ... } // from try @ 036c52f8 with catch @ 036c52f8
                       catch() { ... } // from try @ 036c53cc with catch @ 036c52f8
                       catch() { ... } // from try @ 036c53f4 with catch @ 036c52f8
                       catch() { ... } // from try @ 036c5420 with catch @ 036c52f8
                       catch() { ... } // from try @ 036c5454 with catch @ 036c52f8 */
    (pSVar1->fields).value.fields.g = local_58.value.fields.g;
    (pSVar1->fields).value.fields.b = local_58.value.fields.b;
    (__this_00->fields).hasValue = local_58.hasValue;
    *(undefined3 *)&(__this_00->fields).field_0x1 = local_58._1_3_;
    (__this_00->fields).value.fields.r = local_58.value.fields.r;
  }
  UVar2 = (UnityEngine_Color_Fields)
          System_Nullable<Color>__get_Value(__this_00,Method_System_Nullable<Color>_get_Value__);
  return (UnityEngine_Color_o)UVar2;
}

