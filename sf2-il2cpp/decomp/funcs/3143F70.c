// KKLJIDJBFEI$$HKAALOKPBPG @ RVA 0x3143F70

void KKLJIDJBFEI__HKAALOKPBPG(KKLJIDJBFEI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456676e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456676e = 1;
  }
  ppSVar4 = &(__this->fields).PBFGHKBLCKN;
  a = *ppSVar4;
                    /* try { // try from 03243fb4 to 03343fb7 has its CatchHandler @ 03243fbc */
                    /* try { // try from 03243fb8 to 03343fdb has its CatchHandler @ 03243e40 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03243fb4 with catch @ 03243fbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03243f30 with catch @ 03243fc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03243f14 with catch @ 03243fc4
                        */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 03243fdc to 03343fdf has its CatchHandler @ 03244000 */
                    /* try { // try from 03243fe0 to 03344007 has its CatchHandler @ 03243e40 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* catch() { ... } // from try @ 03243fdc with catch @ 03244000 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03244008 to 0334400f has its CatchHandler @ 03244024 */
  FUN_01babc64(pSVar2);
}

