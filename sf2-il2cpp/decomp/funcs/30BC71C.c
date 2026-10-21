// Nekki.SF2.GUI.Common.SceneMenuScroll$$MGPKIPFGKHJ @ RVA 0x30BC71C

bool Nekki_SF2_GUI_Common_SceneMenuScroll__MGPKIPFGKHJ
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t KDLGNPCKLIJ,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_T__o *__this_00;
  
  if ((DAT_0456624d & 1) == 0) {
                    /* try { // try from 031bc740 to 032bc757 has its CatchHandler @ 031bc768 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DBMPKPJGIPI>_Contains__);
    DAT_0456624d = 1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).BNLLNJDLGJB;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
                    /* try { // try from 031bc758 to 032bc77f has its CatchHandler @ 031bc6f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc740 with catch @ 031bc768
                        */
    bVar1 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,KDLGNPCKLIJ,
                       Method_System_Collections_Generic_List<DBMPKPJGIPI>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

