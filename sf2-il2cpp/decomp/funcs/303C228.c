// CloseButton$$NKKGGAFHJPK @ RVA 0x303C228

void CloseButton__NKKGGAFHJPK(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  undefined8 uVar2;
  System_Action_object__o *pSVar3;
  UnityEngine_Vector3_o value;
  int32_t local_14;
  
                    /* try { // try from 0313c234 to 0323c24b has its CatchHandler @ 0313beb0 */
  if ((DAT_04565d8d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 0313c24c to 0323c24f has its CatchHandler @ 0313c304 */
                    /* try { // try from 0313c250 to 0323c253 has its CatchHandler @ 0313c308 */
    DAT_04565d8d = 1;
  }
                    /* try { // try from 0313c254 to 0323c257 has its CatchHandler @ 0313c280 */
                    /* catch() { ... } // from try @ 0313c158 with catch @ 0313c258
                       try { // try from 0313c258 to 0323c2bb has its CatchHandler @ 0313beb0 */
                    /* catch() { ... } // from try @ 0313c0a0 with catch @ 0313c25c */
  pUVar1 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313bf88 with catch @ 0313c260 */
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* catch() { ... } // from try @ 0313bf80 with catch @ 0313c268 */
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).GOLEIJPNDMM.fields;
                    /* catch() { ... } // from try @ 0313bf78 with catch @ 0313c26c */
                    /* catch() { ... } // from try @ 0313bf5c with catch @ 0313c270 */
                    /* catch() { ... } // from try @ 0313c164 with catch @ 0313c274 */
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)pUVar1,value,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313c1b8 with catch @ 0313c278 */
                    /* catch() { ... } // from try @ 0313c180 with catch @ 0313c27c */
                    /* catch() { ... } // from try @ 0313c084 with catch @ 0313c280
                       catch() { ... } // from try @ 0313c254 with catch @ 0313c280 */
    pUVar1 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0313c06c with catch @ 0313c284 */
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* catch() { ... } // from try @ 0313c064 with catch @ 0313c288 */
                    /* catch() { ... } // from try @ 0313bf64 with catch @ 0313c28c */
                    /* catch() { ... } // from try @ 0313c05c with catch @ 0313c290 */
                    /* catch() { ... } // from try @ 0313c054 with catch @ 0313c294 */
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar1,(UnityEngine_Vector2_o)(__this->fields).LHOCKKLCPHK.fields,(MethodInfo *)0x0
                );
                    /* catch() { ... } // from try @ 0313bf48 with catch @ 0313c298 */
      pSVar3 = (__this->fields).LKIMJCGKOHH;
                    /* catch() { ... } // from try @ 0313c040 with catch @ 0313c29c */
      if (pSVar3 != (System_Action_object__o *)0x0) {
                    /* catch() { ... } // from try @ 0313bf34 with catch @ 0313c2a0 */
        local_14 = (__this->fields).super.super.ButtonId;
        uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_14);
                    /* try { // try from 0313c2bc to 0323c2bf has its CatchHandler @ 0313c2cc */
                    /* catch() { ... } // from try @ 0313c2bc with catch @ 0313c2cc */
        (*(code *)(pSVar3->fields).super.super.invoke_impl)
                  ((pSVar3->fields).super.super.method_code,uVar2,
                   (pSVar3->fields).super.super.method);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

