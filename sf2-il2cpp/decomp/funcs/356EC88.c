// Nekki.SF2.GUI.Menu.MainMenu$$KBBDLHONPIO @ RVA 0x356EC88

void Nekki_SF2_GUI_Menu_MainMenu__KBBDLHONPIO
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool AIJPKOCFDJP,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  CHDGOFBHAFI_o *__this_02;
  ulong uVar2;
  ulong extraout_x1;
  ulong extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *__this_03;
  
                    /* try { // try from 0366ec88 to 0376ec8f has its CatchHandler @ 03673118 */
  uVar2 = (ulong)AIJPKOCFDJP;
                    /* try { // try from 0366ec9c to 0376eca3 has its CatchHandler @ 03673114 */
  if ((DAT_04568c4a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo,uVar2);
                    /* try { // try from 0366ecb4 to 0376ecbb has its CatchHandler @ 0367310c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366ecbc to 0376eccf has its CatchHandler @ 03673108 */
    DAT_04568c4a = 1;
    uVar2 = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
                    /* try { // try from 0366ecdc to 0376ecdf has its CatchHandler @ 03673104 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366ecf0 to 0376ecf7 has its CatchHandler @ 03673270 */
    thunk_FUN_01ba7564();
    uVar2 = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366ed04 to 0376ed0b has its CatchHandler @ 03673100 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,uVar2);
    DAT_04565b7d = '\x01';
  }
                    /* try { // try from 0366ed1c to 0376ed23 has its CatchHandler @ 036730fc */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 0366ed30 to 0376ed37 has its CatchHandler @ 036730f8 */
    __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366ed48 to 0376ed4f has its CatchHandler @ 036730f4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366ed50 to 0376ed5f has its CatchHandler @ 036730f0 */
      DAT_04565b7d = '\x01';
    }
  }
  else {
    __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0366ed78 to 0376edb3 has its CatchHandler @ 03673224 */
    bVar1 = ACHLOMELAJE__KIDFHIOEAAP(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__HDOJACGLHIN(__this_03,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_Menu_MainMenu__UpdateDojoDiscipleButton(__this,method_00);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0366edc8 to 0376edd3 has its CatchHandler @ 036730ec */
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_01,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
                    /* try { // try from 0366edd8 to 0376eddf has its CatchHandler @ 036730e8 */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        if (__this_02 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 0366edfc to 0376ee03 has its CatchHandler @ 03672d04 */
          CHDGOFBHAFI__PNLACGIDHPI(__this_02,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

