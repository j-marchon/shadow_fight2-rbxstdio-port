// Nekki.SF2.GUI.Map.MapContainer$$add_OnOpened @ RVA 0x323AD1C

void Nekki_SF2_GUI_Map_MapContainer__add_OnOpened
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567058 & 1) == 0) {
                    /* try { // try from 0333ad3c to 0343ad63 has its CatchHandler @ 0333ad78 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567058 = 1;
  }
  ppSVar4 = &(__this->fields).ENMNHIMEELL;
  a = *ppSVar4;
                    /* try { // try from 0333ad64 to 0343ad6f has its CatchHandler @ 0333a968 */
                    /* try { // try from 0333ad70 to 0343ad77 has its CatchHandler @ 0333ad78 */
                    /* catch() { ... } // from try @ 0333ad3c with catch @ 0333ad78
                       catch() { ... } // from try @ 0333ad70 with catch @ 0333ad78 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

