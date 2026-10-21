// FDJKKAFIEFB$$GFGNEFOPAGP @ RVA 0x35B4F5C

System_String_o *
FDJKKAFIEFB__GFGNEFOPAGP
          (FDJKKAFIEFB_o *__this,System_String_o *JEGADCHPBOO,System_String_o *JEHFOBHMGJM,
          MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  uint BJODBCJIGHH;
  int32_t iVar3;
  System_String_o *pSVar4;
  long lVar5;
  System_String_o *newValue;
  MethodInfo *pMVar6;
  long lVar7;
  uint index;
  
                    /* try { // try from 036b4f60 to 037b4faf has its CatchHandler @ 036b49b0 */
  if ((DAT_04568eb1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&StringLiteral_762);
                    /* try { // try from 036b4fb0 to 037b4fbf has its CatchHandler @ 036b4fc4 */
    FUN_01bab630(&StringLiteral_4313);
                    /* try { // try from 036b4fc0 to 037b4fc7 has its CatchHandler @ 036b49b0 */
                    /* catch() { ... } // from try @ 036b4f48 with catch @ 036b4fc4
                       catch() { ... } // from try @ 036b4fb0 with catch @ 036b4fc4 */
    FUN_01bab630(&StringLiteral_756);
                    /* try { // try from 036b4fc8 to 037b4fcb has its CatchHandler @ 036b4fd4 */
                    /* try { // try from 036b4fcc to 037b4fd7 has its CatchHandler @ 036b49b0 */
    FUN_01bab630(&StringLiteral_803);
                    /* catch() { ... } // from try @ 036b4fc8 with catch @ 036b4fd4 */
    DAT_04568eb1 = 1;
  }
  if (JEGADCHPBOO != (System_String_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
    BJODBCJIGHH = System_String__IndexOf(JEGADCHPBOO,0x25,(MethodInfo *)0x0);
    do {
      if (BJODBCJIGHH == 0xffffffff) {
        return JEGADCHPBOO;
      }
      index = BJODBCJIGHH + 1;
      if ((int)index < (JEGADCHPBOO->fields)._stringLength) {
        pMVar6 = (MethodInfo *)0x0;
        uVar2 = System_String__get_Chars(JEGADCHPBOO,index,(MethodInfo *)0x0);
        if (uVar2 != 0x25) goto LAB_036b506c;
        JEGADCHPBOO = System_String__Remove(JEGADCHPBOO,BJODBCJIGHH,1,(MethodInfo *)0x0);
      }
      else {
LAB_036b506c:
        if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = FDJKKAFIEFB__LKBOKHMGDFE(JEGADCHPBOO,BJODBCJIGHH,pMVar6);
        pMVar6 = (MethodInfo *)0x0;
        pSVar4 = System_String__Substring(JEGADCHPBOO,index,iVar3 + ~BJODBCJIGHH,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        lVar5 = Method_System_Array_Empty<string>__;
        if (bVar1) {
          pSVar4 = System_String__Remove(JEGADCHPBOO,BJODBCJIGHH,1,(MethodInfo *)0x0);
          if (pSVar4 == (System_String_o *)0x0) break;
          JEGADCHPBOO = System_String__Insert
                                  (pSVar4,BJODBCJIGHH,StringLiteral_762,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat
                             (StringLiteral_4313,JEHFOBHMGJM,StringLiteral_803,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
          if (StringLiteral_762 == (System_String_o *)0x0) break;
          iVar3 = (StringLiteral_762->fields)._stringLength;
        }
        else {
          lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar7 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar7 = *(long *)(lVar5 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01b81620();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01b81620();
          }
          newValue = FDJKKAFIEFB__FFNEBCPLKDN
                               (__this,pSVar4,(System_String_array *)**(undefined8 **)(lVar5 + 0xb8)
                                ,pMVar6);
          pSVar4 = System_String__Concat(StringLiteral_756,pSVar4,(MethodInfo *)0x0);
          JEGADCHPBOO = System_String__Replace(JEGADCHPBOO,pSVar4,newValue,(MethodInfo *)0x0);
          if (newValue == (System_String_o *)0x0) break;
          iVar3 = (newValue->fields)._stringLength;
        }
        index = iVar3 + BJODBCJIGHH;
      }
      if (JEGADCHPBOO == (System_String_o *)0x0) break;
      if ((JEGADCHPBOO->fields)._stringLength <= (int)index) {
        return JEGADCHPBOO;
      }
      pMVar6 = (MethodInfo *)(ulong)index;
      BJODBCJIGHH = System_String__IndexOf(JEGADCHPBOO,0x25,index,(MethodInfo *)0x0);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

