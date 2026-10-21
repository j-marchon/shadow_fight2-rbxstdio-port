// WideScreenController$$.ctor @ RVA 0x31EA434

void WideScreenController___ctor(WideScreenController_o *__this,MethodInfo *method)

{
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).NBJELGMNNEJ.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

