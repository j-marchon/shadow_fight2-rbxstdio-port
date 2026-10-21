// CloseButton$$OnDestroy @ RVA 0x303C0B4

void CloseButton__OnDestroy(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 0313c0b4 to 0323c0b7 has its CatchHandler @ 0313c318 */
                    /* try { // try from 0313c0cc to 0323c0cf has its CatchHandler @ 0313c314 */
                    /* try { // try from 0313c0d4 to 0323c0d7 has its CatchHandler @ 0313c30c */
  if ((DAT_04565d8b & 1) == 0) {
    FUN_01bab630(&Method_CloseButton_PlayClickAnimation__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565d8b = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
                    /* try { // try from 0313c108 to 0323c12f has its CatchHandler @ 0313c320 */
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0313c13c to 0323c153 has its CatchHandler @ 0313c300 */
    UnityEngine_Events_UnityEvent__RemoveListener(__this_00,call,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

