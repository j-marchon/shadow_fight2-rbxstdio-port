// KBECBDOOHCO$$PDDDDDPBEMI @ RVA 0x358F0E0

void KBECBDOOHCO__PDDDDDPBEMI
               (KBECBDOOHCO_o *__this,UnityEngine_GameObject_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      JJHEGPBBMLG != (UnityEngine_GameObject_o *)0x0)) &&
     (parent = UnityEngine_GameObject__get_transform(JJHEGPBBMLG,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0368f128 to 0378f12f has its CatchHandler @ 0368f16c */
    UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

