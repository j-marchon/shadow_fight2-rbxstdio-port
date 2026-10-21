// KDPDBGNOFEN$$CHMEICFBNAK @ RVA 0x34AE834

void KDPDBGNOFEN__CHMEICFBNAK
               (KDPDBGNOFEN_o *__this,System_String_o *JGHIJMJNJLE,System_String_o *CELOLGNMKCG,
               System_String_o *PAAGBBHAOEO,System_Type_o *ACCIHBHMFPN,
               Google_Protobuf_IMessage_o *JPLEIGKMFDA,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  System_Object_array *args;
  long lVar3;
  System_String_o *pSVar4;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  undefined8 uVar5;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CELOLGNMKCG;
  if ((DAT_04568548 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11552);
    DAT_04568548 = 1;
  }
  uVar2 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                    (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
  if (((uVar2 & 1) == 0) || (bVar1 = KDPDBGNOFEN__DNHGHLJMHHH(__this,CELOLGNMKCG,method_00), bVar1))
  {
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
LAB_035aea74:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((JGHIJMJNJLE != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(JGHIJMJNJLE,(((args->obj).klass)->_1).element_class), lVar3 == 0))
  {
LAB_035aea68:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)JGHIJMJNJLE;
    thunk_FUN_01c20e04(args->m_Items,JGHIJMJNJLE);
    if ((CELOLGNMKCG != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(CELOLGNMKCG,(((args->obj).klass)->_1).element_class), lVar3 == 0)
       ) goto LAB_035aea68;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)CELOLGNMKCG;
      thunk_FUN_01c20e04(args->m_Items + 1,CELOLGNMKCG);
      if ((ACCIHBHMFPN != (System_Type_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(ACCIHBHMFPN,(((args->obj).klass)->_1).element_class),
         lVar3 == 0)) goto LAB_035aea68;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)ACCIHBHMFPN;
        thunk_FUN_01c20e04(args->m_Items + 2,ACCIHBHMFPN);
        if ((PAAGBBHAOEO != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(PAAGBBHAOEO,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) goto LAB_035aea68;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)PAAGBBHAOEO;
          thunk_FUN_01c20e04(args->m_Items + 3,PAAGBBHAOEO);
          pSVar4 = ICAJGHJPOBL__APBCALFHJJE((Il2CppObject *)JPLEIGKMFDA,false,(MethodInfo *)0x0);
                    /* try { // try from 035ae9c4 to 036aeb17 has its CatchHandler @ 035ae9c4
                       catch() { ... } // from try @ 035ae9c4 with catch @ 035ae9c4
                       catch() { ... } // from try @ 035aec7c with catch @ 035ae9c4
                       catch() { ... } // from try @ 035aedc4 with catch @ 035ae9c4
                       catch() { ... } // from try @ 035aeebc with catch @ 035ae9c4 */
          if ((pSVar4 != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0
             )) goto LAB_035aea68;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = (Il2CppObject *)pSVar4;
            thunk_FUN_01c20e04(args->m_Items + 4,pSVar4);
            pSVar4 = System_String__Format(StringLiteral_11552,args,(MethodInfo *)0x0);
            BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                          FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
            if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_035aea74;
            if ((int)BBBLOLJAMJP->max_length != 0) {
              BBBLOLJAMJP->m_Items[0] = 6;
              Nekki_Utils_DetailedLog__Log(pSVar4,BBBLOLJAMJP,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

