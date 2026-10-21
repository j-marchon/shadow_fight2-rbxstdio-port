// IEFEBEDLHNN$$GAMGKJCEMAJ @ RVA 0x308B5D0

void IEFEBEDLHNN__GAMGKJCEMAJ(IEFEBEDLHNN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  (__this->fields).MCAILHLELHB = CJNHFNHJHPE;
  if (CJNHFNHJHPE) {
    bVar1 = true;
                    /* try { // try from 0318b5e8 to 0328b947 has its CatchHandler @ 0318b5e8
                       catch() { ... } // from try @ 0318b5e8 with catch @ 0318b5e8
                       catch() { ... } // from try @ 0318b988 with catch @ 0318b5e8
                       catch() { ... } // from try @ 0318bab4 with catch @ 0318b5e8
                       catch() { ... } // from try @ 0318bd68 with catch @ 0318b5e8 */
  }
  else {
    bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  (__this->fields).MCKFLABMNAK = bVar1;
  return;
}

