// EIABCPKDEBD$$FDCFJOINOPB @ RVA 0x3134E6C

UnityEngine_Vector2_o
EIABCPKDEBD__FDCFJOINOPB
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,UnityEngine_Vector2_o HBFDLMOKDGA,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  MethodInfo_27FC88C *in_x2;
  float fVar2;
  System_Nullable_Vector2__o __this;
  System_Nullable_Vector2__Fields local_40;
  
  fVar2 = HBFDLMOKDGA.fields.y;
  if ((DAT_045666f6 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    DAT_045666f6 = 1;
  }
  local_40 = (System_Nullable_Vector2__Fields)
             GIAMPEGMNHE__JHLNBAHDGPI(LBJNDMNEJJB,(MethodInfo *)0x0);
  if ((local_40._0_8_ & 0xff) != 0) {
    __this.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
    __this.fields._0_8_ = &local_40;
    HBFDLMOKDGA = System_Nullable<Vector2>__get_Value(__this,in_x2);
    fVar2 = HBFDLMOKDGA.fields.y;
  }
  UVar1.y = fVar2;
  UVar1.x = HBFDLMOKDGA.fields.x;
  return (UnityEngine_Vector2_o)UVar1;
}

