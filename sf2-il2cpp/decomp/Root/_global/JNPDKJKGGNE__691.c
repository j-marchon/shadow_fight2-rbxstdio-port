// TypeDefIndex 691
// Namespace: 
// public class JNPDKJKGGNE : IJIHLBLCJMG
// Fields:

// ===== public override void NKLGCNHLBAF()  [RVA 0x3032700]
// JNPDKJKGGNE$$NKLGCNHLBAF @ RVA 0x3032700

void JNPDKJKGGNE__NKLGCNHLBAF(JNPDKJKGGNE_o *__this,MethodInfo *method)

{
  System_Action_IGFGDDANEPE__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar2;
  GGHCLMEFIGO_o *pGVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Action_IGFGDDANEPE__o *action;
  
                    /* try { // try from 03132700 to 0323274b has its CatchHandler @ 0313268c */
  if ((DAT_04565d0e & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031326d4 with catch @ 03132730
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031326e0 with catch @ 03132734
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0313274c to 0323274f has its CatchHandler @ 0313275c */
    FUN_01bab630(&Method_JNPDKJKGGNE_<>c_JBCLNEBFCBA__);
                    /* catch() { ... } // from try @ 0313274c with catch @ 0313275c */
    FUN_01bab630(&JNPDKJKGGNE_<>c_TypeInfo);
    DAT_04565d0e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03132768 to 0323276f has its CatchHandler @ 03132784 */
                    /* try { // try from 03132770 to 0323277b has its CatchHandler @ 0313268c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 0313277c to 03232783 has its CatchHandler @ 03132784 */
  if (DAT_04565b7d == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03132768 with catch @ 03132784
                       catch(type#2 @ 00000000) { ... } // from try @ 0313277c with catch @ 03132784
                        */
                    /* try { // try from 03132788 to 032327fb has its CatchHandler @ 03132788
                       catch() { ... } // from try @ 03132788 with catch @ 03132788
                       catch() { ... } // from try @ 03132818 with catch @ 03132788
                       catch() { ... } // from try @ 0313288c with catch @ 03132788 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    pGVar3 = (pAVar2->fields).OIDPLCLELEN;
    if (pGVar3 != (GGHCLMEFIGO_o *)0x0) {
      __this_00 = (pGVar3->fields).DPOPJKJLDEE;
      if ((JNPDKJKGGNE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(JNPDKJKGGNE_<>c_TypeInfo,method);
      }
      action = JNPDKJKGGNE_<>c_TypeInfo->static_fields->__9__3_0;
      if (action == (System_Action_IGFGDDANEPE__o *)0x0) {
        if ((JNPDKJKGGNE_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 031327fc to 03232807 has its CatchHandler @ 0313284c */
                    /* try { // try from 0313280c to 03232817 has its CatchHandler @ 03132850 */
        action = (System_Action_IGFGDDANEPE__o *)
                 thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
                    /* try { // try from 03132818 to 03232867 has its CatchHandler @ 03132788 */
        System_Action<object>___ctor();
        ppSVar1 = &JNPDKJKGGNE_<>c_TypeInfo->static_fields->__9__3_0;
        *ppSVar1 = action;
        thunk_FUN_01c20e04(ppSVar1,action);
      }
      if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031327fc with catch @ 0313284c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313280c with catch @ 03132850
                        */
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
        goto LAB_03132860;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03132860:
                    /* try { // try from 03132868 to 0323286b has its CatchHandler @ 03132878 */
                    /* catch() { ... } // from try @ 03132868 with catch @ 03132878 */
  IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
  return;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x3032880]
// JNPDKJKGGNE$$JFGBPBOCOIC @ RVA 0x3032880

bool JNPDKJKGGNE__JFGBPBOCOIC(JNPDKJKGGNE_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
                    /* try { // try from 03132884 to 0323288b has its CatchHandler @ 031328a0 */
  return HJDMBDBJEFL == 0;
}


// ===== public void .ctor()  [RVA 0x303288C]
// JNPDKJKGGNE$$.ctor @ RVA 0x303288C

void JNPDKJKGGNE___ctor(JNPDKJKGGNE_o *__this,MethodInfo *method)

{
                    /* try { // try from 0313288c to 03232897 has its CatchHandler @ 03132788 */
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x3032894]
// JNPDKJKGGNE$$KGGGBHEMAOO @ RVA 0x3032894

int32_t JNPDKJKGGNE__KGGGBHEMAOO(JNPDKJKGGNE_o *__this,MethodInfo *method)

{
                    /* try { // try from 03132898 to 0323289f has its CatchHandler @ 031328a0 */
  return 0xd;
}

