// PJKHAJKEHEL$$HCCKONOABKP @ RVA 0x303FF10

float PJKHAJKEHEL__HCCKONOABKP
                (PJKHAJKEHEL_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  FPLCEOJCPOD_o *__this_00;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  int32_t local_24;
  
                    /* try { // try from 0313ff10 to 0323ff4f has its CatchHandler @ 0313fe88 */
  if ((DAT_04565dba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 0313ff0c with catch @ 0313ff40 */
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 0313ff50 to 0323ff5f has its CatchHandler @ 0313ff74 */
    FUN_01bab630(&StringLiteral_10118);
    DAT_04565dba = 1;
  }
  local_24 = 0;
                    /* try { // try from 0313ff60 to 0323ff6b has its CatchHandler @ 0313fe88 */
  __this_00 = (__this->fields).ACHJNNOKEDK;
  if (__this_00 != (FPLCEOJCPOD_o *)0x0) {
                    /* try { // try from 0313ff6c to 0323ff73 has its CatchHandler @ 0313ff74 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313ff50 with catch @ 0313ff74
                       catch(type#2 @ 00000000) { ... } // from try @ 0313ff6c with catch @ 0313ff74
                        */
                    /* catch() { ... } // from try @ 0313ffac with catch @ 0313ff7c
                       catch() { ... } // from try @ 0313ffe4 with catch @ 0313ff7c
                       catch() { ... } // from try @ 03140004 with catch @ 0313ff7c
                       catch() { ... } // from try @ 03140054 with catch @ 0313ff7c */
    bVar1 = FPLCEOJCPOD__KNMENIBLFGF(__this_00,KGLJICLJHEL,&local_24,true,false,(MethodInfo *)0x0);
    if (bVar1) {
      fVar4 = (float)local_24;
    }
    else {
                    /* try { // try from 0313ff94 to 0323ffa3 has its CatchHandler @ 0313ffe8 */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_03140024;
                    /* try { // try from 0313ffa8 to 0323ffab has its CatchHandler @ 0313ffe4 */
                    /* try { // try from 0313ffac to 0323ffdf has its CatchHandler @ 0313ff7c */
      if ((KGLJICLJHEL != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
         lVar2 == 0)) {
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03140000 with catch @ 03140034 */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
      thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
                    /* try { // try from 0313ffe0 to 0323ffe3 has its CatchHandler @ 0313ffe8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313ffa8 with catch @ 0313ffe4
                       try { // try from 0313ffe4 to 0323ffff has its CatchHandler @ 0313ff7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313ff94 with catch @ 0313ffe8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0313ffe0 with catch @ 0313ffe8
                        */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03140000 to 03240003 has its CatchHandler @ 03140034 */
                    /* try { // try from 03140004 to 03240043 has its CatchHandler @ 0313ff7c */
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10118,args,(MethodInfo *)0x0);
      fVar4 = -3.4028235e+38;
    }
    return fVar4;
  }
LAB_03140024:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

