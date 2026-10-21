// WideScreenController$$Awake @ RVA 0x31EA3F8

void WideScreenController__Awake(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = WideScreenController__MBEOLOBEACM(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 032ea40c to 033ea417 has its CatchHandler @ 032ea624 */
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 032ea418 to 033ea5fb has its CatchHandler @ 032ea260 */
    (__this->fields).NBJELGMNNEJ.fields = UVar1;
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

