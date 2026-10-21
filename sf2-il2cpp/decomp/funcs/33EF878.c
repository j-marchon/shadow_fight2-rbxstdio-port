// FCJBEKHDLAF$$KNLFICNFHBE @ RVA 0x33EF878

void FCJBEKHDLAF__KNLFICNFHBE(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_List_KMJDCOABCCG__o *pSVar2;
  Il2CppObject *item;
  FLHAOOHNCAL_o *pFVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  FLHAOOHNCAL_c *pFVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 034ef878 to 035ef87b has its CatchHandler @ 034ef8b8 */
                    /* try { // try from 034ef87c to 035ef87f has its CatchHandler @ 034ef8b0 */
                    /* try { // try from 034ef880 to 035ef883 has its CatchHandler @ 034ef8a8 */
                    /* try { // try from 034ef884 to 035ef88b has its CatchHandler @ 034ef8b4 */
                    /* try { // try from 034ef88c to 035ef893 has its CatchHandler @ 034ef8a0 */
  if ((DAT_04567efa & 1) == 0) {
                    /* try { // try from 034ef894 to 035ef8db has its CatchHandler @ 034ef608 */
                    /* catch() { ... } // from try @ 034ef788 with catch @ 034ef898 */
    FUN_01bab630(&FLHAOOHNCAL_TypeInfo);
                    /* catch() { ... } // from try @ 034ef820 with catch @ 034ef89c */
                    /* catch() { ... } // from try @ 034ef88c with catch @ 034ef8a0 */
                    /* catch() { ... } // from try @ 034ef7d0 with catch @ 034ef8a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Remove__);
                    /* catch() { ... } // from try @ 034ef880 with catch @ 034ef8a8 */
                    /* catch() { ... } // from try @ 034ef73c with catch @ 034ef8ac */
                    /* catch() { ... } // from try @ 034ef87c with catch @ 034ef8b0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
                    /* catch() { ... } // from try @ 034ef884 with catch @ 034ef8b4 */
                    /* catch() { ... } // from try @ 034ef878 with catch @ 034ef8b8 */
    DAT_04567efa = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 034ef874 with catch @ 034ef8bc */
                    /* catch() { ... } // from try @ 034ef870 with catch @ 034ef8c0 */
  if ((__this->fields).IMEHPHJJNJH != false) {
                    /* catch() { ... } // from try @ 034ef6fc with catch @ 034ef8c4 */
    return;
  }
  (__this->fields).IMEHPHJJNJH = true;
                    /* try { // try from 034ef8dc to 035ef8df has its CatchHandler @ 034ef900 */
  FCJBEKHDLAF__EMCONMBJABM(__this,method);
                    /* try { // try from 034ef8e0 to 035ef907 has its CatchHandler @ 034ef608 */
  pSVar2 = (__this->fields).KKOLONOKNIO;
  if (pSVar2 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
    item = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar2,0,
                      Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    pSVar2 = (__this->fields).KKOLONOKNIO;
                    /* catch() { ... } // from try @ 034ef8dc with catch @ 034ef900 */
    if (pSVar2 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
                    /* try { // try from 034ef908 to 035ef90f has its CatchHandler @ 034ef924 */
                    /* try { // try from 034ef910 to 035ef91b has its CatchHandler @ 034ef608 */
                    /* try { // try from 034ef91c to 035ef923 has its CatchHandler @ 034ef924 */
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,item,
                 Method_System_Collections_Generic_List<KMJDCOABCCG>_Remove__);
                    /* catch() { ... } // from try @ 034ef908 with catch @ 034ef924
                       catch() { ... } // from try @ 034ef91c with catch @ 034ef924 */
      pFVar3 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance
                         ((MethodInfo *)0x0);
      if (pFVar3 != (FLHAOOHNCAL_o *)0x0) {
        pFVar5 = pFVar3->klass;
        uVar1._0_1_ = (pFVar5->_2).rank;
        uVar1._1_1_ = (pFVar5->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pFVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)FLHAOOHNCAL_TypeInfo) {
              pVVar4 = pFVar5->vtable + (*piVar7 + 2);
              goto LAB_034ef988;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pFVar3,FLHAOOHNCAL_TypeInfo,2);
LAB_034ef988:
                    /* WARNING: Could not recover jumptable at 0x034ef99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pFVar3,item,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

