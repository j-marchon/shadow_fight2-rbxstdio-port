// CloseButton$$Start @ RVA 0x303C2EC

void CloseButton__Start(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* catch() { ... } // from try @ 0313c13c with catch @ 0313c300
                       try { // try from 0313c300 to 0323c33b has its CatchHandler @ 0313beb0 */
                    /* catch() { ... } // from try @ 0313c188 with catch @ 0313c304
                       catch() { ... } // from try @ 0313c24c with catch @ 0313c304 */
                    /* catch() { ... } // from try @ 0313c1a0 with catch @ 0313c308
                       catch() { ... } // from try @ 0313c250 with catch @ 0313c308 */
                    /* catch() { ... } // from try @ 0313c0d4 with catch @ 0313c30c */
                    /* catch() { ... } // from try @ 0313c21c with catch @ 0313c310 */
                    /* catch() { ... } // from try @ 0313c0cc with catch @ 0313c314 */
  if ((DAT_04565d8e & 1) == 0) {
                    /* catch() { ... } // from try @ 0313c0b4 with catch @ 0313c318 */
                    /* catch() { ... } // from try @ 0313c214 with catch @ 0313c31c */
                    /* catch() { ... } // from try @ 0313c108 with catch @ 0313c320 */
    FUN_01bab630(&Method_CloseButton_PlayClickAnimation__);
                    /* catch() { ... } // from try @ 0313c218 with catch @ 0313c324
                       catch() { ... } // from try @ 0313c220 with catch @ 0313c324 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565d8e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0313c33c to 0323c33f has its CatchHandler @ 0313c34c */
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
                    /* catch() { ... } // from try @ 0313c33c with catch @ 0313c34c */
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0313c364 to 0323c373 has its CatchHandler @ 0313c388 */
                    /* try { // try from 0313c374 to 0323c37f has its CatchHandler @ 0313beb0 */
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

