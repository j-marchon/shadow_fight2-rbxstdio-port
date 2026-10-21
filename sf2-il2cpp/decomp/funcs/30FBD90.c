// LFOMNKEACBL$$PDIAFGHECLE @ RVA 0x30FBD90

void LFOMNKEACBL__PDIAFGHECLE
               (LFOMNKEACBL_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  long *plVar3;
  HOOAAGABMBL_o *pHVar4;
  long lVar5;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *pOVar6;
  
                    /* try { // try from 031fbda8 to 032fbdab has its CatchHandler @ 031fbdb8 */
                    /* try { // try from 031fbdac to 032fbdaf has its CatchHandler @ 031fbdb4 */
  if ((DAT_0456649f & 1) == 0) {
                    /* try { // try from 031fbdb0 to 032fbdd7 has its CatchHandler @ 031fbb54 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbdac with catch @ 031fbdb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbda8 with catch @ 031fbdb8
                        */
    FUN_01bab630(&StringLiteral_8772);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbc94 with catch @ 031fbdbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031fbc74 with catch @ 031fbdc0
                        */
    FUN_01bab630(&StringLiteral_9537);
    DAT_0456649f = 1;
  }
                    /* try { // try from 031fbdd8 to 032fbddb has its CatchHandler @ 031fbe04 */
                    /* try { // try from 031fbddc to 032fbe13 has its CatchHandler @ 031fbb54 */
  if ((((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
       (pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI, pOVar6 != (OLKKAIFGGAK_o *)0x0)) &&
      (pOVar6 = (pOVar6->fields).BPJMMBGIMNC, pOVar6 != (OLKKAIFGGAK_o *)0x0)) &&
     (pPVar2 = (pOVar6->fields).FAPMJJBOFEF, pPVar2 != (PJKHAJKEHEL_o *)0x0)) {
                    /* catch() { ... } // from try @ 031fbdd8 with catch @ 031fbe04 */
    plVar3 = (long *)(*(pPVar2->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                               (pPVar2,StringLiteral_8772,0,
                                (pPVar2->klass->vtable)._4_CJPIJKJDHGI.method);
                    /* try { // try from 031fbe14 to 032fbe1b has its CatchHandler @ 031fbe30 */
                    /* try { // try from 031fbe1c to 032fbe27 has its CatchHandler @ 031fbb54 */
    if ((plVar3 != (long *)0x0) &&
       (bVar1 = System_String__op_Inequality
                          ((System_String_o *)plVar3[6],StringLiteral_8772,(MethodInfo *)0x0),
       !bVar1)) {
                    /* try { // try from 031fbe28 to 032fbe2f has its CatchHandler @ 031fbe30 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031fbe14 with catch @ 031fbe30
                       catch(type#2 @ 00000000) { ... } // from try @ 031fbe28 with catch @ 031fbe30
                        */
      bVar1 = System_String__op_Equality
                        ((System_String_o *)plVar3[3],StringLiteral_9537,(MethodInfo *)0x0);
      if (!bVar1) {
        pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if ((pOVar6 != (OLKKAIFGGAK_o *)0x0) &&
           (pPVar2 = (pOVar6->fields).FAPMJJBOFEF, pPVar2 != (PJKHAJKEHEL_o *)0x0)) {
          pHVar4 = (HOOAAGABMBL_o *)
                   (*(pPVar2->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                             (pPVar2,StringLiteral_8772,0,
                              (pPVar2->klass->vtable)._4_CJPIJKJDHGI.method);
          (__this->fields).OFHEIFDJBLA = pHVar4;
          thunk_FUN_01c20e04();
          lVar5 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + 0x290) = 1;
            pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
            if ((pOVar6 != (OLKKAIFGGAK_o *)0x0) &&
               (pPVar2 = (pOVar6->fields).FAPMJJBOFEF, pPVar2 != (PJKHAJKEHEL_o *)0x0)) {
              method_00 = (pPVar2->klass->vtable)._9_CGNPHPDFKJG.method;
              (*(pPVar2->klass->vtable)._9_CGNPHPDFKJG.methodPtr)(pPVar2,StringLiteral_8772,lVar5);
              pOVar6 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
              if (pOVar6 != (OLKKAIFGGAK_o *)0x0) {
                LFOMNKEACBL__PJOPMAHPBJM(__this,pOVar6,(pOVar6->fields).BPJMMBGIMNC,method_00);
                return;
              }
            }
          }
        }
        goto LAB_031fbee4;
      }
    }
    return;
  }
LAB_031fbee4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

