// IDLLJHPDAHE$$IBHPNNBHECE @ RVA 0x315E690

float IDLLJHPDAHE__IBHPNNBHECE
                (IDLLJHPDAHE_o *__this,System_String_o *AFKICLAFDKC,PJKHAJKEHEL_o *NDOMOKBINFD,
                MethodInfo *method)

{
  bool bVar1;
  IDLLJHPDAHE_GEBJFKLEAMM_o *pIVar2;
  FPLCEOJCPOD_o *__this_00;
  System_String_o *message;
  PJKHAJKEHEL_o *method_00;
  float fVar3;
  int32_t local_24;
  
  method_00 = NDOMOKBINFD;
  if ((DAT_04566880 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_418);
    DAT_04566880 = 1;
  }
  pIVar2 = IDLLJHPDAHE__EADLGLJJBGB(__this,AFKICLAFDKC,(MethodInfo *)method_00);
  if (pIVar2 == (IDLLJHPDAHE_GEBJFKLEAMM_o *)0x0) {
    message = System_String__Concat(AFKICLAFDKC,StringLiteral_418,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    fVar3 = 0.0;
  }
  else if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
    fVar3 = (pIVar2->fields).EDJNGCBGHAC;
  }
  else {
    local_24 = 0;
    __this_00 = (NDOMOKBINFD->fields).ACHJNNOKEDK;
    if (__this_00 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0325e700 to 0335e9b7 has its CatchHandler @ 0325e700
                       catch() { ... } // from try @ 0325e700 with catch @ 0325e700
                       catch() { ... } // from try @ 0325e9f8 with catch @ 0325e700
                       catch() { ... } // from try @ 0325ea24 with catch @ 0325e700
                       catch() { ... } // from try @ 0325ea54 with catch @ 0325e700
                       catch() { ... } // from try @ 0325ea84 with catch @ 0325e700 */
    bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                      (__this_00,(pIVar2->fields).KEAMOFCKGHH,&local_24,true,false,(MethodInfo *)0x0
                      );
    fVar3 = (pIVar2->fields).EDJNGCBGHAC;
    if (bVar1) {
      fVar3 = fVar3 * (float)local_24;
    }
  }
  return fVar3;
}

