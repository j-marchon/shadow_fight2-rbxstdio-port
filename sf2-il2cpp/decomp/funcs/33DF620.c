// Nekki.SF2.GUI.Pvp.PhaseWeapon$$UpdateContent @ RVA 0x33DF620

void Nekki_SF2_GUI_Pvp_PhaseWeapon__UpdateContent
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  Il2CppObject *pIVar5;
  System_Predicate_T__o *match;
  HOOAAGABMBL_o *item;
  BNAIBAODKAK_o *pBVar6;
  
                    /* try { // try from 034df620 to 035df653 has its CatchHandler @ 034e0204 */
  if ((DAT_04567e8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
                    /* try { // try from 034df65c to 035df67b has its CatchHandler @ 034e01ac */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_LNBMOMMOHCB__);
                    /* try { // try from 034df694 to 035df69b has its CatchHandler @ 034e01e0 */
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 034df6a4 to 035df6af has its CatchHandler @ 034e01c4 */
    FUN_01bab630(&StringLiteral_20433);
    DAT_04567e8e = 1;
  }
  Nekki_SF2_GUI_Pvp_PhaseItem__UpdateContent
            ((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).LGHNHMJIDIB;
  if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,0,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    pSVar4 = (__this->fields).LGHNHMJIDIB;
    if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar4,0,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
      pSVar4 = (__this->fields).LGHNHMJIDIB;
                    /* try { // try from 034df704 to 035df727 has its CatchHandler @ 034e0194 */
      if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        System_Collections_Generic_List<object>__Insert
                  ((System_Collections_Generic_List_object__o *)pSVar4,(__this->fields).DJEHNBIGFJD,
                   pIVar5,Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
        pBVar6 = (__this->fields).super.KPLEAGPMKFD;
        if (pBVar6 != (BNAIBAODKAK_o *)0x0) {
                    /* try { // try from 034df738 to 035df73f has its CatchHandler @ 034e01c0 */
          bVar1 = System_String__op_Equality
                            ((pBVar6->fields).PKJEMIDJPAG,StringLiteral_20433,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).LGHNHMJIDIB;
          if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
            item = (__this->fields).HLIAIMHBACP;
            if (bVar1) {
                    /* try { // try from 034df750 to 035df757 has its CatchHandler @ 034e01bc */
              iVar2 = System_Collections_Generic_List<object>__IndexOf
                                ((System_Collections_Generic_List_object__o *)pSVar4,
                                 (Il2CppObject *)item,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
                    /* try { // try from 034df764 to 035df76b has its CatchHandler @ 034e01d8 */
              if (iVar2 < 0) {
                pSVar4 = (__this->fields).LGHNHMJIDIB;
                if (pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)
                goto LAB_034df850;
                    /* try { // try from 034df77c to 035df783 has its CatchHandler @ 034e01b8 */
                System_Collections_Generic_List<object>__Insert
                          ((System_Collections_Generic_List_object__o *)pSVar4,0,
                           (Il2CppObject *)(__this->fields).HLIAIMHBACP,
                           Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
              }
            }
            else {
                    /* try { // try from 034df784 to 035df797 has its CatchHandler @ 034e01b4 */
              System_Collections_Generic_List<object>__Remove
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                         Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
            }
                    /* try { // try from 034df798 to 035df7a3 has its CatchHandler @ 034e01b0 */
            pSVar4 = (__this->fields).LGHNHMJIDIB;
            match = (System_Predicate_T__o *)
                    thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
            System_Predicate<object>___ctor();
            if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
              uVar3 = System_Collections_Generic_List<object>__FindIndex
                                ((System_Collections_Generic_List_object__o *)pSVar4,match,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_FindIndex__);
              pSVar4 = (__this->fields).LGHNHMJIDIB;
                    /* try { // try from 034df7e8 to 035df80b has its CatchHandler @ 034e0190 */
              uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              (__this->fields).DJEHNBIGFJD = uVar3;
              if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar4,uVar3,
                                    Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
                pSVar4 = (__this->fields).LGHNHMJIDIB;
                if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                  System_Collections_Generic_List<object>__RemoveAt
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (__this->fields).DJEHNBIGFJD,
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAt__);
                    /* try { // try from 034df81c to 035df81f has its CatchHandler @ 034e014c */
                  pSVar4 = (__this->fields).LGHNHMJIDIB;
                  if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 034df828 to 035df847 has its CatchHandler @ 034e0180 */
                    System_Collections_Generic_List<object>__Insert
                              ((System_Collections_Generic_List_object__o *)pSVar4,0,pIVar5,
                               Method_System_Collections_Generic_List<HOOAAGABMBL>_Insert__);
                    (__this->fields).FODBFCKBFDF = true;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034df850:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

