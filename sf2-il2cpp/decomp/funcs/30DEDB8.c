// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DEDB8

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 *puVar1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ded90 with catch @ 031dedb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dec60 with catch @ 031dedbc
                        */
                    /* try { // try from 031dedd4 to 032dedd7 has its CatchHandler @ 031dede4 */
  if ((DAT_04566388 & 1) == 0) {
                    /* catch() { ... } // from try @ 031dedd4 with catch @ 031dede4 */
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
                    /* try { // try from 031dedf4 to 032dee5b has its CatchHandler @ 031dee70 */
    DAT_04566388 = 1;
  }
  if (__this != (KIHIPAJGNBF_o *)0x0) {
    puVar1 = &StringLiteral_1606;
    if (!CJNHFNHJHPE) {
      puVar1 = &StringLiteral_1567;
    }
    KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,(System_String_o *)*puVar1,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

