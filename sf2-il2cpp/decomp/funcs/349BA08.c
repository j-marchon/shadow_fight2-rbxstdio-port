// NGKBNOEJLPH$$LKLHPNPNDGN @ RVA 0x349BA08

void NGKBNOEJLPH__LKLHPNPNDGN(NGKBNOEJLPH_o *__this,FHHDFKADHEI_o *MJEOBEDMNHL,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_NGKBNOEJLPH_NEFFJJAPAOP__o *__this_00;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  CAAJMGKIPIE_o *pCVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *__this_01;
  int index;
  float fVar5;
  float fVar6;
  
  if ((DAT_0456846d & 1) == 0) {
                    /* try { // try from 0359ba38 to 0369ba3f has its CatchHandler @ 0359bb90 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Count__
                );
                    /* try { // try from 0359ba44 to 0369ba4b has its CatchHandler @ 0359bb98 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_NEFFJJAPAOP>_get_Item__);
                    /* try { // try from 0359ba54 to 0369ba63 has its CatchHandler @ 0359bb88 */
    DAT_0456846d = 1;
  }
  pCVar4 = (__this->fields)._MPABEMCEHCL_k__BackingField;
  if ((pCVar4 != (CAAJMGKIPIE_o *)0x0) &&
     (__this_01 = (pCVar4->fields).EPIHANAMOIN,
     __this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)) {
    iVar1 = (__this_01->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        __this_00 = (__this->fields).JMAPJDAAABE;
        if (__this_00 == (System_Collections_Generic_List_NGKBNOEJLPH_NEFFJJAPAOP__o *)0x0)
        goto LAB_0359bb0c;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<NGKBNOEJLPH_NEFFJJAPAOP>_get_Item__
                           );
                    /* try { // try from 0359baa4 to 0369bac7 has its CatchHandler @ 0359bb84 */
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                           );
                    /* try { // try from 0359bac8 to 0369bb5b has its CatchHandler @ 0359b830 */
        if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[1].monitor == (OBOBEOMMECI_o *)0x0)) ||
           (fVar5 = OBOBEOMMECI__PPOKEOHAHFG
                              (pIVar3[1].monitor,MJEOBEDMNHL,(System_String_o *)0x0,
                               (MethodInfo *)0x0), pIVar2 == (Il2CppObject *)0x0))
        goto LAB_0359bb0c;
        fVar6 = *(float *)((long)&pIVar2[1].klass + 4);
        index = index + 1;
        *(float *)&pIVar2[1].klass = fVar5;
        *(bool *)&pIVar2[1].monitor = fVar6 < fVar5;
      } while (iVar1 != index);
    }
    return;
  }
LAB_0359bb0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

