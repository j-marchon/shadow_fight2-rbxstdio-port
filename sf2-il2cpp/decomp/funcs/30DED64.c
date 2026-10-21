// KIHIPAJGNBF$$FPEHFKPMIHK @ RVA 0x30DED64

void KIHIPAJGNBF__FPEHFKPMIHK(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_long__o *pSVar1;
  
  if ((DAT_04566387 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Clear__);
                    /* try { // try from 031ded8c to 032ded8f has its CatchHandler @ 031dedac */
    DAT_04566387 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031ded90 to 032ded97 has its CatchHandler @ 031dedb8 */
  pSVar1 = (__this->fields).LLDABLJEMBM;
  if (pSVar1 != (System_Collections_Generic_List_long__o *)0x0) {
                    /* try { // try from 031ded98 to 032ded9b has its CatchHandler @ 031dea20 */
                    /* try { // try from 031ded9c to 032ded9f has its CatchHandler @ 031deda8 */
                    /* try { // try from 031deda0 to 032dedd3 has its CatchHandler @ 031dea20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ded9c with catch @ 031deda8
                        */
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ded8c with catch @ 031dedac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dec00 with catch @ 031dedb0
                        */
    KIHIPAJGNBF__LEEIGJNPOKM(__this,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031deba4 with catch @ 031dedb4
                        */
  FUN_01bab8c8();
}

