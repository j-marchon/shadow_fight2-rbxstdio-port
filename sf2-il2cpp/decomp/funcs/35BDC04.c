// LCAOAAFEOAG.<>c$$KEPJHHAMKOP @ RVA 0x35BDC04

bool LCAOAAFEOAG_<>c__KEPJHHAMKOP
               (LCAOAAFEOAG___c_o *__this,
               System_Collections_Generic_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA__o ad,
               MethodInfo *method)

{
  byte bVar1;
  ulong uVar2;
  FCMAKNBEJDA_o *pFVar3;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdb50 with catch @ 036bdc04
                        */
  pFVar3 = ad.fields.value;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdae0 with catch @ 036bdc08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdaec with catch @ 036bdc0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdbf8 with catch @ 036bdc10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdbf4 with catch @ 036bdc14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdb20 with catch @ 036bdc18
                        */
  if ((DAT_04568ef4 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bda8c with catch @ 036bdc1c
                        */
    __this = (LCAOAAFEOAG___c_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>_get_Value__
                          ,ad.fields._0_8_);
    DAT_04568ef4 = 1;
  }
  if (pFVar3 == (FCMAKNBEJDA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
                    /* try { // try from 036bdc34 to 037bdc37 has its CatchHandler @ 036bdc58 */
                    /* try { // try from 036bdc38 to 037bdc5f has its CatchHandler @ 036bd95c */
  uVar2 = (*(pFVar3->klass->vtable)._8_unknown.methodPtr)
                    (pFVar3,(pFVar3->klass->vtable)._8_unknown.method);
  if ((uVar2 & 1) != 0) {
    uVar2 = (*(pFVar3->klass->vtable)._6_unknown.methodPtr)
                      (pFVar3,(pFVar3->klass->vtable)._6_unknown.method);
                    /* catch() { ... } // from try @ 036bdc34 with catch @ 036bdc58 */
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 036bdc68 to 037bdc73 has its CatchHandler @ 036bd95c */
      bVar1 = (*pFVar3->klass[1]._1.image)(pFVar3,pFVar3->klass[1]._1.gc_desc);
                    /* try { // try from 036bdc74 to 037bdc7b has its CatchHandler @ 036bdc7c */
      bVar1 = bVar1 ^ 1;
      goto LAB_036bdc78;
    }
  }
  bVar1 = 0;
                    /* try { // try from 036bdc60 to 037bdc67 has its CatchHandler @ 036bdc7c */
LAB_036bdc78:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036bdc60 with catch @ 036bdc7c
                       catch(type#2 @ 00000000) { ... } // from try @ 036bdc74 with catch @ 036bdc7c
                        */
                    /* try { // try from 036bdc80 to 037bdd3b has its CatchHandler @ 036bdc80
                       catch() { ... } // from try @ 036bdc80 with catch @ 036bdc80
                       catch() { ... } // from try @ 036bdd44 with catch @ 036bdc80
                       catch() { ... } // from try @ 036bddb4 with catch @ 036bdc80
                       catch() { ... } // from try @ 036bddd8 with catch @ 036bdc80
                       catch() { ... } // from try @ 036bde18 with catch @ 036bdc80 */
  return (bool)(bVar1 & 1);
}

