package nodi;

import Visitor.Visitatore;

public class IntegerConst extends Node{
    public int val;

    public IntegerConst(int val) {
        this.val = val;
    }

    public Object accept(Visitatore v) {
        return v.visit(this);
    }
}