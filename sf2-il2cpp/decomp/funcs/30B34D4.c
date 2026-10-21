// EDELKOLBNDG$$DGCODECJJCC @ RVA 0x30B34D4

bool EDELKOLBNDG__DGCODECJJCC(EDELKOLBNDG_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  MethodInfo *in_x4;
  
                    /* try { // try from 031b34d8 to 032b34df has its CatchHandler @ 031b35d4 */
                    /* try { // try from 031b34e8 to 032b3507 has its CatchHandler @ 031b35cc */
  if ((DAT_045661f1 & 1) == 0) {
    FUN_01bab630(&IBCHOCDIMIP_TypeInfo);
    DAT_045661f1 = 1;
  }
                    /* try { // try from 031b3508 to 032b352f has its CatchHandler @ 031b35b4 */
  (*(__this->klass->vtable)._20_BLLEKLPPHBN.methodPtr)
            (__this,IMMNELPBGIF,(__this->klass->vtable)._20_BLLEKLPPHBN.method);
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 031b3530 to 032b3533 has its CatchHandler @ 031b35ec */
                    /* try { // try from 031b3534 to 032b354b has its CatchHandler @ 031b35e8 */
    bVar1 = (IBCHOCDIMIP_TypeInfo->_2).naturalAligment;
                    /* try { // try from 031b354c to 032b3553 has its CatchHandler @ 031b35c0 */
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)IBCHOCDIMIP_TypeInfo)) {
                    /* catch() { ... } // from try @ 031b33f0 with catch @ 031b35c4 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b3338 with catch @ 031b35c8 */
      FUN_01babc64(IMMNELPBGIF);
    }
                    /* try { // try from 031b355c to 032b357b has its CatchHandler @ 031b35b8 */
    bVar3 = true;
    bVar2 = EDELKOLBNDG__AMFNAJDCAKF
                      (__this,(JMIFGHKOLCL_o *)IMMNELPBGIF[1].klass,IMMNELPBGIF[1].monitor,true,
                       in_x4);
    if (!bVar2) {
      bVar3 = EDELKOLBNDG__AMFNAJDCAKF
                        (__this,IMMNELPBGIF[1].monitor,(JMIFGHKOLCL_o *)IMMNELPBGIF[1].klass,false,
                         in_x4);
                    /* try { // try from 031b357c to 032b35a3 has its CatchHandler @ 031b35ac */
    }
    if (IMMNELPBGIF[1].klass != (Il2CppClass *)0x0) {
      if (*(int *)&((IMMNELPBGIF[1].klass)->_1).namespaze != 9) {
        if (IMMNELPBGIF[1].monitor == (void *)0x0) goto LAB_031b35c0;
                    /* try { // try from 031b35a4 to 032b35a7 has its CatchHandler @ 031b35e0 */
        if (*(int *)((long)IMMNELPBGIF[1].monitor + 0x18) != 9) {
          return bVar3;
        }
      }
                    /* try { // try from 031b35a8 to 032b35ab has its CatchHandler @ 031b35e4 */
                    /* catch() { ... } // from try @ 031b357c with catch @ 031b35ac
                       try { // try from 031b35ac to 032b360f has its CatchHandler @ 031b3244 */
      *(undefined1 *)&(__this->fields).IKEDHPAPFDA = 1;
                    /* catch() { ... } // from try @ 031b3358 with catch @ 031b35b0 */
                    /* catch() { ... } // from try @ 031b3508 with catch @ 031b35b4 */
                    /* catch() { ... } // from try @ 031b355c with catch @ 031b35b8 */
                    /* catch() { ... } // from try @ 031b3414 with catch @ 031b35bc */
      return true;
    }
  }
LAB_031b35c0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b354c with catch @ 031b35c0 */
  FUN_01bab8c8();
}

