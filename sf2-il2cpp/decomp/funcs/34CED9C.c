// FKAKHBPABPA$$KFAABFCCGHH @ RVA 0x34CED9C

bool FKAKHBPABPA__KFAABFCCGHH
               (FKAKHBPABPA_o *__this,float AINBPAEDKKN,float CJNHFNHJHPE,float GAJONDLDKLI,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  KIMBEBLJJPN_o *__this_00;
  System_Collections_Generic_List_KIMBEBLJJPN__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  KIMBEBLJJPN_array *pKVar3;
  
  if ((DAT_045686a0 & 1) == 0) {
    FUN_01bab630(&KIMBEBLJJPN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_Add__);
    DAT_045686a0 = 1;
    method = extraout_x1;
  }
  if (0.0 <= AINBPAEDKKN) {
    __this_00 = (KIMBEBLJJPN_o *)thunk_FUN_01bda818(KIMBEBLJJPN_TypeInfo,method);
    KIMBEBLJJPN___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (KIMBEBLJJPN_o *)0x0) {
      (__this_00->fields).AINBPAEDKKN = AINBPAEDKKN;
      (__this_00->fields).CJNHFNHJHPE = CJNHFNHJHPE;
      (__this_00->fields).GAJONDLDKLI = GAJONDLDKLI;
      lVar2 = Method_System_Collections_Generic_List<KIMBEBLJJPN>_Add__;
      __this_01 = (__this->fields).OKAINPMIKKD;
      if (__this_01 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) {
        pKVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pKVar3 != (KIMBEBLJJPN_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pKVar3->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pKVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pKVar3->m_Items + (int)uVar1,__this_00);
            method_00 = extraout_x1_00;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            method_00 = extraout_x1_01;
          }
          FKAKHBPABPA__DLGNAEJNNKI(__this,method_00);
          goto LAB_035cee8c;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035cee8c:
  return 0.0 <= AINBPAEDKKN;
}

