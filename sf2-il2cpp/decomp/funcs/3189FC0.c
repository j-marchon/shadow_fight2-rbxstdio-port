// BEPJMNAHCAD$$LLENHOPMLBH @ RVA 0x3189FC0

void BEPJMNAHCAD__LLENHOPMLBH
               (BEPJMNAHCAD_o *__this,UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  
                    /* try { // try from 03289fe0 to 03389fe7 has its CatchHandler @ 0328a138 */
  if ((DAT_04566a05 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_3772);
    DAT_04566a05 = 1;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_3772,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).LDAKOINICNJ;
  *ppUVar2 = __this_00;
  thunk_FUN_01c20e04(ppUVar2,__this_00);
                    /* try { // try from 0328a038 to 0338a05b has its CatchHandler @ 0328a130 */
  if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar1 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(pUVar1,JJHEGPBBMLG,false,(MethodInfo *)0x0);
                    /* try { // try from 0328a060 to 0338a063 has its CatchHandler @ 0328a088 */
                    /* try { // try from 0328a068 to 0338a06b has its CatchHandler @ 0328a084 */
    if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0328a070 to 0338a073 has its CatchHandler @ 0328a07c */
                    /* try { // try from 0328a074 to 0338a09f has its CatchHandler @ 03289dac */
                    /* catch() { ... } // from try @ 03289f64 with catch @ 0328a078 */
                    /* catch() { ... } // from try @ 0328a070 with catch @ 0328a07c */
                    /* catch() { ... } // from try @ 03289fac with catch @ 0328a080 */
                    /* catch() { ... } // from try @ 0328a068 with catch @ 0328a084 */
                    /* catch() { ... } // from try @ 0328a060 with catch @ 0328a088 */
                    /* catch() { ... } // from try @ 03289f38 with catch @ 0328a08c */
      UnityEngine_Transform__set_localPosition
                (pUVar1,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03289f24 with catch @ 0328a090 */
  FUN_01bab8c8();
}

